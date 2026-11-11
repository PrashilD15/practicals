# Practical 5: Thread Synchronization (Dining Philosophers Problem)

## Description / वर्णन
Solves the classic Dining Philosophers synchronization problem using semaphores to prevent deadlock.

## How to Execute / Run (कसे चालवायचे):

```bash
gcc dining_philosophers.c -lpthread -o dining_philosophers
./dining_philosophers
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **Deadlock Condition: Deadlock occurs if all philosophers grab their left fork simultaneously and wait indefinitely for the right fork.**\n- **Solution mechanism: Uses mutex and state tracking (THINKING, HUNGRY, EATING) along with semaphore array S[N] to ensure no adjacent philosophers eat simultaneously.**
