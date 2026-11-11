# Practical 3: Process States (Zombie and Orphan Processes)

Demonstrates the creation of orphan and zombie process states.

## Execution

```bash
gcc zombie_orphan.c -o zombie_orphan
./zombie_orphan
```

## Notes & Viva

- Zombie Process: A process that has finished execution but still has an entry in the process table because its parent hasn't read its exit status with `wait()`.
- Orphan Process: A process whose parent has terminated before it. It gets adopted by init or systemd (PID 1).
