# Practical 9: Disk Scheduling Algorithms

Implementations for the three primary disk scheduling algorithms:
- `sstf.c`: Shortest Seek Time First
- `scan.c`: SCAN (Elevator Algorithm)
- `clook.c`: Circular LOOK (C-LOOK Algorithm)

## Compilation & Execution

### 1. SSTF
```bash
gcc sstf.c -o sstf
./sstf
```

**Sample Input / Output:**
```
Enter the number of Requests
8
Enter the Requests sequence
98 183 37 122 14 124 65 67
Enter initial head position
50
Total head movement is 205
```

---

### 2. SCAN (Elevator)
```bash
gcc scan.c -o scan
./scan
```

**Sample Input / Output (High / 1):**
```
Enter the number of Requests: 8
Enter the Requests sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 50
Enter total disk size: 200
Enter the head movement direction for high 1 and for low 0: 1
Total head movement is 334
```

**Sample Input / Output (Low / 0):**
```
Enter the head movement direction for high 1 and for low 0: 0
Total head movement is 233
```

---

### 3. C-LOOK
```bash
gcc clook.c -o clook
./clook
```

**Sample Input / Output (High / 1):**
```
Enter the number of Requests: 8
Enter the Requests sequence: 98 183 37 122 14 124 65 67
Enter initial head position: 50
Enter total disk size: 200
Enter the head movement direction for high 1 and for low 0: 1
Total head movement is 325
```

**Sample Input / Output (Low / 0):**
```
Enter the head movement direction for high 1 and for low 0: 0
Total head movement is 323
```

## Notes & Viva

- **SSTF:** Selects the disk I/O request requiring the least head movement from current position. Risk of starvation for faraway tracks.
- **SCAN:** Head moves toward one end servicing requests until the boundary (`size - 1` or `0`), then reverses.
- **C-LOOK:** Head services requests toward one direction, but instead of going to the disk boundary, it reverses immediately after the last request and jumps directly to the furthest request at the other end.
