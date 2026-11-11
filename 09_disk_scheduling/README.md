# Practical 9: Disk Scheduling Algorithms (SSTF, SCAN, C-LOOK)

## Description / वर्णन
Implementation of Shortest Seek Time First (SSTF), SCAN (Elevator), and C-LOOK disk scheduling algorithms.

## How to Execute / Run (कसे चालवायचे):

```bash
gcc disk_sched.c -o disk_sched
./disk_sched
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **SSTF: Selects the request with the minimum seek time from the current head position (can cause starvation).**\n- **SCAN: Moves head toward one end servicing requests until reaching the end, then reverses direction (Elevator algorithm).**\n- **C-LOOK: Goes as far as the last request in one direction, then immediately jumps back to the furthest request in the opposite direction without going all the way to the disk edge.**
