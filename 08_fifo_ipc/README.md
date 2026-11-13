# Practical 8: Interprocess Communication (Named Pipes / FIFOs)

Demonstrates bidirectional IPC between two independent processes using named pipes (`fifo6.txt` and `fifo7.txt` created with `mkfifo`).
- **Server:** Prompts for message string, writes message to `fifo6.txt`, reads statistics from `fifo7.txt`.
- **Client:** Reads message from `fifo6.txt`, calculates number of words, characters, and lines, and writes summary back to `fifo7.txt`.

## Execution

Open two separate terminals in `08_fifo_ipc`:

**Terminal 1 (Run Client first):**
```bash
gcc client.c -o client
./client
```

**Terminal 2 (Run Server):**
```bash
gcc server.c -o server
./server
```

*(Note: `fifo_reader.c` and `fifo_writer.c` are also available with the exact same functionality)*

## Sample Output

**Server Terminal:**
```
Server
FIFO OPEN

		Enter the Message to be passed (hitting ENTER without any string will terminate program): i am server and passing the message

Server Received:  No.of Words : 7::: No.of Charecters: 35::: No.of Lines: 1
```

**Client Terminal:**
```
	Client - Listening

FIFO OPEN

Client Received: i am server and passing the message

	String:  No.of Words : 7::: No.of Charecters: 35::: No.of Lines: 1
CLIENT CLOSED
SERVER CLOSED
```

## Notes & Viva

- `mkfifo("pathname", mode)`: Creates a named pipe (FIFO special file) with read/write permissions (e.g. `0666`).
- Blocking behavior: Opening a FIFO for reading blocks until another process opens it for writing, and vice-versa.
- Difference from pipe: FIFOs have filesystem names and allow communication between unrelated processes across independent terminal sessions.
