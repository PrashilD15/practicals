# Practical 7: Interprocess Communication (Anonymous Pipes)

Full-duplex IPC using two pipes (`pipe1` and `pipe2`):
1. Parent process inputs file pathname and passes it to Child through `pipe1`.
2. Child process reads pathname from `pipe1`, opens file, and transmits file contents through `pipe2`.
3. Parent process reads from `pipe2` and displays the contents.

## Execution

```bash
gcc pipes_comm.c -o pipes_comm
./pipes_comm
```

## Sample Run

```
Enter the pathname of the file: demo3.txt

Contents of the file:
Hi welcome to operating System.
Maja nahi bhai !
```

## Notes & Viva

- Why two pipes? A Unix pipe is unidirectional (half-duplex). Two pipes are required to achieve full-duplex two-way communication.
- File descriptors:
  - `pipe[0]`: Read end
  - `pipe[1]`: Write end
- `close()` calls: Closing unused ends avoids hanging on `read()` and frees file descriptors.
