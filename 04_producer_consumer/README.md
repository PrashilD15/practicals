# Practical 4: Thread Synchronization (Producer-Consumer using Semaphores & Mutex)

## Description / वर्णन
Solves the classic producer-consumer problem using POSIX threads, counting semaphores (empty, full), and a mutual exclusion mutex.

## How to Execute / Run (कसे चालवायचे):

```bash
gcc prod_cons.c -lpthread -lrt -o prod_cons
./prod_cons
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **Mutex vs. Semaphore: A mutex is a locking mechanism (binary) owned by a single thread, whereas a counting semaphore tracks resource availability across multiple units.**\n- **sem_wait & sem_post: sem_wait() decrements the semaphore (blocks if 0); sem_post() increments it.**
