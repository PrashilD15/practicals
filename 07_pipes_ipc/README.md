# Practical 7: Interprocess Communication (Anonymous Pipes)

Parent process passes a file path to child via Pipe 1, and child responds back via Pipe 2.

## Execution

```bash
gcc pipes_comm.c -o pipes_comm
./pipes_comm
```

## Notes & Viva

- Unidirectional: Standard pipe is one-way. Two pipes are required for two-way communication between parent and child.
- File descriptors: `pipe[0]` is read end, `pipe[1]` is write end.
