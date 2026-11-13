# Practical 2: Process Management (Fork & Sorting)

Demonstrates process creation using `fork()`. 
- `fork_sort.c`: Child process performs ascending Bubble Sort; Parent calls `wait(NULL)` and performs descending Bubble Sort.
- `simple_fork.c`: Takes 2 numbers; child computes sum and sorts ascending, parent computes product and sorts descending.

## Execution

```bash
gcc fork_sort.c -o fork_sort
./fork_sort
```

Or for simple 2-number fork demo:
```bash
gcc simple_fork.c -o simple_fork
./simple_fork
```

## Sample Input / Output

```
enter number of elements
5
enter 5 numbers
64 25 12 22 11

Child Process
Child PID = 12345
CHILD PERFORMED ASCENDING SORT=11 12 22 25 64 

hi from Parent
Parent Process
Parent PID = 12344
PARENT PERFORMED DESCENDING SORT=64 25 22 12 11 
```

## Notes & Viva

- `fork()` returns:
  - `0` to child process
  - Child's PID to parent process
  - `-1` on error
- `wait(NULL)`: Parent suspends execution until child terminates, preventing zombie state.
