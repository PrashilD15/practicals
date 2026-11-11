# Practical 9: Disk Scheduling Algorithms

Implementation of SSTF (Shortest Seek Time First), SCAN (Elevator), and C-LOOK disk scheduling algorithms.

## Execution

```bash
gcc disk_sched.c -o disk_sched
./disk_sched
```

## Notes & Viva

- SSTF: Services the request closest to the current head position. Can lead to starvation.
- SCAN: Moves the head towards one direction servicing requests until the end, then reverses direction.
- C-LOOK: Services requests in one direction up to the last request, then jumps directly to the lowest request in the other direction.
