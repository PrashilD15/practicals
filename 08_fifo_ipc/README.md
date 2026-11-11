# Practical 8: Interprocess Communication (Named Pipes / FIFOs)

## Description / वर्णन
Demonstrates IPC between two unrelated processes using named pipes created with mkfifo().

## How to Execute / Run (कसे चालवायचे):

```bash
# Terminal 1 (Run Reader first):\ngcc fifo_reader.c -o fifo_reader\n./fifo_reader\n\n# Terminal 2 (Run Writer):\ngcc fifo_writer.c -o fifo_writer\n./fifo_writer
```

## Viva Questions & Key Concepts / तोंडी परीक्षेसाठी महत्त्वाचे मुद्दे:
- **FIFO vs Anonymous Pipe: FIFOs exist as special files in the filesystem and enable IPC between unrelated processes, whereas standard pipes require a parent-child hierarchy.**\n- **mkfifo(): System call that creates a FIFO special file with specified permission bits (e.g. 0666).**
