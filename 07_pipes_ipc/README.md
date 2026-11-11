# Practical 7: Interprocess Communication (Anonymous Pipes)

## Description / वर्णन
Parent passes a file path to child via Pipe 1, and child responds back with confirmation/content via Pipe 2.

## How to Execute / Run (कसे चालवायचे):

```bash
gcc pipes_comm.c -o pipes_comm
./pipes_comm
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **Pipe Characteristics: Unidirectional communication channel. Requiring two pipes for full-duplex communication between parent and child.**\n- **File descriptors: pipe[0] is read end, pipe[1] is write end.**
