# Practical 5: Dining Philosophers Problem

Implementation of the Dining Philosophers synchronization problem using semaphores to avoid deadlock.

## Execution

```bash
gcc dining_philosophers.c -lpthread -o dining_philosophers
./dining_philosophers
```

## Notes & Viva

- Deadlock Condition: Occurs if all philosophers grab their left fork simultaneously and wait indefinitely for the right fork.
- Prevention: Uses state checking (`THINKING`, `HUNGRY`, `EATING`) and a mutex so adjacent philosophers cannot eat at the same time.
