# Practical 3: Process States (Zombie and Orphan Processes)

## Description / वर्णन
Demonstrates the creation and behavior of Orphan and Zombie process states in C.

## How to Execute / Run (कसे चालवायचे):

```bash
gcc zombie_orphan.c -o zombie_orphan
./zombie_orphan
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **Zombie Process: A process that has completed execution but still has an entry in the process table because its parent hasn't read its exit status with wait().**\n- **Orphan Process: A running process whose parent process has terminated. It is adopted by init (PID 1) or systemd.**
