# Practical 6: Deadlock Avoidance (Banker's Algorithm)

Interactive program that inputs allocation matrix, maximum matrix, and available resources, computes the Need matrix, and finds a safe execution sequence.

## Execution

```bash
gcc bankers.c -o bankers
./bankers
```

## Sample Input / Output (Standard Exam Values)

```
Enter number of processes: 5
Enter number of resources: 3

Enter Allocation Matrix:
Process P0: 0 1 0
Process P1: 2 0 0
Process P2: 3 0 2
Process P3: 2 1 1
Process P4: 0 0 2

Enter Maximum Matrix:
Process P0: 7 5 3
Process P1: 3 2 2
Process P2: 9 0 2
Process P3: 2 2 2
Process P4: 4 3 3

Enter Available Resources:
3 3 2

Need Matrix:
P0: 7 4 3 
P1: 1 2 2 
P2: 6 0 0 
P3: 0 1 1 
P4: 4 3 1 

System is in a SAFE state.
Safe Sequence: P1 -> P3 -> P4 -> P0 -> P2
```

## Notes & Viva

- Formula: `Need[i][j] = Max[i][j] - Allocation[i][j]`
- Safety Condition: If `Need[i] <= Work`, process $P_i$ can be allocated, finishes execution, and releases its resources (`Work = Work + Allocation[i]`).
- If all processes finish (`count == n`), system is in a safe state and free from deadlock.
