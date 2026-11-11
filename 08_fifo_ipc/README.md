# Practical 8: Interprocess Communication (Named Pipes / FIFOs)

Demonstrates IPC between two independent processes using a named pipe (`mkfifo`).

## Execution

Run in two separate terminals:

Terminal 1 (Start Reader):
```bash
gcc fifo_reader.c -o fifo_reader
./fifo_reader
```

Terminal 2 (Start Writer):
```bash
gcc fifo_writer.c -o fifo_writer
./fifo_writer
```

## Notes & Viva

- FIFO vs Pipe: FIFOs exist as filesystem entries and allow unrelated processes to communicate. Standard pipes require a common parent/child ancestor.
