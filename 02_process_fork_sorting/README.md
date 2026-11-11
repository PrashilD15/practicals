# Practical 2: Process Management (Fork & Sorting Array)

## Description / वर्णन
Demonstrates process creation using fork(). Parent and child processes sort the same array of integers using different sorting techniques (Bubble Sort and Insertion Sort).

## How to Execute / Run (कसे चालवायचे):

```bash
gcc fork_sort.c -o fork_sort
./fork_sort
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **fork(): System call used to create a child process. Returns 0 to the child, child PID to the parent, and -1 on error.**\n- **wait(): Suspends parent execution until a child process terminates.**
