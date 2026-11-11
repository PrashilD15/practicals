# Practical 2: Process Management (Fork & Sorting Array)

Demonstrates process creation using `fork()`. Parent and child processes sort the same array of integers using different sorting algorithms (Bubble Sort and Insertion Sort).

## Execution

```bash
gcc fork_sort.c -o fork_sort
./fork_sort
```

## Notes & Viva

- `fork()`: Creates a child process. Returns 0 to the child, child PID to the parent, and -1 on error.
- `wait()`: Blocks parent until child process finishes execution.
