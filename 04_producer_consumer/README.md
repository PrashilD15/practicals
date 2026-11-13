# Practical 4: Thread Synchronization (Producer-Consumer using Semaphores & Mutex)

Solves the producer-consumer bounded-buffer problem using POSIX threads (`pthread`), counting semaphores (`empty`, `full`), and `pthread_mutex_t`.

## Execution

```bash
gcc prod_cons.c -lpthread -o prod_cons
./prod_cons
```
*(On older Linux distributions, add `-lrt` if required: `gcc prod_cons.c -lpthread -lrt -o prod_cons`)*

## Logic

- `empty` semaphore: Initialized to `BUFFER_SIZE` (tracks empty slots).
- `full` semaphore: Initialized to `0` (tracks filled slots).
- `mutex`: Protects critical section (buffer insertion and extraction).
- Producer produces items 1 to 10 and sleeps 1s.
- Consumer consumes items from buffer and sleeps 2s.

## Notes & Viva

- `sem_wait(&sem)`: Decrements semaphore count. If count is 0, thread blocks.
- `sem_post(&sem)`: Increments semaphore count and wakes up waiting thread.
- `pthread_mutex_lock` / `pthread_mutex_unlock`: Ensures mutual exclusion so producer and consumer cannot access buffer index simultaneously.
