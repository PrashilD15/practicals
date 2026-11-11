# Practical 6: Banker's Algorithm (Deadlock Avoidance)

Determines if a resource allocation state is safe and outputs a safe execution sequence.

## Execution

```bash
gcc bankers.c -o bankers
./bankers
```

## Notes & Viva

- Need Matrix: `Need[i][j] = Max[i][j] - Allocation[i][j]`
- Safe State: A state in which at least one order of process execution exists where every process can complete without deadlock.
