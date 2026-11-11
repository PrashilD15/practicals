#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    pid_t pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("\n[Child Process PID: %d] Sorting using Insertion Sort...\n", getpid());
        insertionSort(arr, n);
        printf("[Child Process] Sorted Array: ");
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        wait(NULL);
        printf("\n[Parent Process PID: %d] Sorting using Bubble Sort...\n", getpid());
        bubbleSort(arr, n);
        printf("[Parent Process] Sorted Array: ");
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
