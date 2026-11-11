#include <stdio.h>
#include <stdlib.h>

void sstf(int requests[], int n, int head) {
    int total_seek = 0;
    int visited[100] = {0};
    int cur_head = head;
    printf("\n--- SSTF Disk Scheduling ---\n");
    printf("Starting Head Position: %d\nPath: %d", cur_head, cur_head);
    for (int i = 0; i < n; i++) {
        int min = 9999, idx = -1;
        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                int dist = abs(requests[j] - cur_head);
                if (dist < min) {
                    min = dist;
                    idx = j;
                }
            }
        }
        visited[idx] = 1;
        total_seek += min;
        cur_head = requests[idx];
        printf(" -> %d", cur_head);
    }
    printf("\nTotal Seek Time: %d tracks\n", total_seek);
}

void scan(int requests[], int n, int head, int disk_size) {
    int total_seek = 0;
    int cur_head = head;
    int arr[102];
    int m = 0;
    for (int i = 0; i < n; i++) arr[m++] = requests[i];
    arr[m++] = disk_size - 1; // goes to the end in moving direction (upward)

    // Sort requests
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
            }
        }
    }

    printf("\n--- SCAN (Elevator) Disk Scheduling (Moving High) ---\n");
    printf("Starting Head Position: %d\nPath: %d", cur_head, cur_head);

    int idx = 0;
    while (idx < m && arr[idx] < head) idx++;

    // Service requests to the right
    for (int i = idx; i < m; i++) {
        total_seek += abs(arr[i] - cur_head);
        cur_head = arr[i];
        printf(" -> %d", cur_head);
    }
    // Reverse and service requests to the left
    for (int i = idx - 1; i >= 0; i--) {
        total_seek += abs(arr[i] - cur_head);
        cur_head = arr[i];
        printf(" -> %d", cur_head);
    }
    printf("\nTotal Seek Time: %d tracks\n", total_seek);
}

void clook(int requests[], int n, int head) {
    int total_seek = 0;
    int cur_head = head;
    int arr[100];
    for (int i = 0; i < n; i++) arr[i] = requests[i];

    // Sort requests
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
            }
        }
    }

    printf("\n--- C-LOOK Disk Scheduling (Moving High) ---\n");
    printf("Starting Head Position: %d\nPath: %d", cur_head, cur_head);

    int idx = 0;
    while (idx < n && arr[idx] < head) idx++;

    // Service higher requests
    for (int i = idx; i < n; i++) {
        total_seek += abs(arr[i] - cur_head);
        cur_head = arr[i];
        printf(" -> %d", cur_head);
    }
    // Jump to lowest request and service up to idx - 1
    for (int i = 0; i < idx; i++) {
        total_seek += abs(arr[i] - cur_head);
        cur_head = arr[i];
        printf(" -> %d", cur_head);
    }
    printf("\nTotal Seek Time: %d tracks\n", total_seek);
}

int main() {
    int n = 7, head = 50;
    int requests[] = {82, 170, 43, 140, 24, 16, 190};
    int disk_size = 200;

    printf("Disk Requests: ");
    for (int i = 0; i < n; i++) printf("%d ", requests[i]);
    printf("\nInitial Head Position: %d\n", head);

    sstf(requests, n, head);
    scan(requests, n, head, disk_size);
    clook(requests, n, head);

    return 0;
}
