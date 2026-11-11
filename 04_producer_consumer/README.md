# Practical 4: Producer-Consumer Problem

Solves the producer-consumer problem using POSIX threads, counting semaphores (`empty`, `full`), and a mutex.

## Execution

```bash
gcc prod_cons.c -lpthread -lrt -o prod_cons
./prod_cons
```

## Notes & Viva

- Mutex vs Semaphore: A mutex is a locking mechanism (binary) owned by a single thread, while a counting semaphore tracks availability of multiple units.
- `sem_wait()`: Decrements the semaphore (blocks if value is 0).
- `sem_post()`: Increments the semaphore.
