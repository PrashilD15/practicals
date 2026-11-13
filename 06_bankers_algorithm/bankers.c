#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of processes: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    printf("Enter number of resources: ");
    if (scanf("%d", &m) != 1 || m <= 0) return 1;

    int allocation[n][m];
    int max[n][m];
    int need[n][m];
    int available[m];
    int work[m];
    int finish[n];

    // Input Allocation Matrix
    printf("\nEnter Allocation Matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("Process P%d: ", i);
        for (int j = 0; j < m; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    // Input Maximum Matrix
    printf("\nEnter Maximum Matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("Process P%d: ", i);
        for (int j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    // Input Available Resources
    printf("\nEnter Available Resources:\n");
    for (int j = 0; j < m; j++) {
        scanf("%d", &available[j]);
        work[j] = available[j];
    }

    // Calculate Need Matrix
    for (int i = 0; i < n; i++) {
        finish[i] = 0;
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    // Display Need Matrix
    printf("\nNeed Matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d: ", i);
        for (int j = 0; j < m; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    // Banker's Algorithm
    int count = 0;
    int safeSequence[n];

    while (count < n) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (finish[i] == 0) {
                int possible = 1;

                // Check if Need <= Work
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        possible = 0;
                        break;
                    }
                }

                if (possible) {
                    // Process can execute
                    for (int j = 0; j < m; j++) {
                        work[j] += allocation[i][j];
                    }
                    safeSequence[count] = i;
                    finish[i] = 1;
                    count++;
                    found = 1;
                }
            }
        }

        // No process can proceed
        if (found == 0) {
            break;
        }
    }

    // Check whether system is safe
    if (count == n) {
        printf("\nSystem is in a SAFE state.\n");
        printf("Safe Sequence: ");
        for (int i = 0; i < n; i++) {
            printf("P%d", safeSequence[i]);
            if (i != n - 1)
                printf(" -> ");
        }
        printf("\n");
    } else {
        printf("\nSystem is in an UNSAFE state.\n");
        printf("Deadlock may occur.\n");
    }

    return 0;
}
