# Practical 6: Deadlock Avoidance (Banker's Algorithm)

## Description / वर्णन
Determines if a multi-process resource allocation system is in a safe state and prints the safe execution sequence.

## How to Execute / Run (कसे चालवायचे):

```bash
gcc bankers.c -o bankers
./bankers
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **Need Matrix: Calculated as Need[i][j] = Max[i][j] - Allocation[i][j].**\n- **Safe State: A state where there exists at least one sequence of execution that allows all processes to finish without deadlock.**
