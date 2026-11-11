# Operating System Practicals

Repository URL: https://github.com/PrashilD15/practicals  
Short link to remember: github.com/PrashilD15/practicals

This repository contains all Operating System practical programs, compilation instructions, and viva questions.
The lab manual PDF is included in this repository: `OS_Practicals_Complete_Guide.pdf`.

---

## How to Get This Repo on Lab Computers

### 1. Ubuntu / Linux

Using Git:
```bash
git clone https://github.com/PrashilD15/practicals.git
cd practicals
```

Without Git (Direct zip download and extract):
```bash
wget https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip -O practicals.zip && unzip practicals.zip && cd practicals-main
```
Or using curl:
```bash
curl -LO https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip && unzip main.zip && cd practicals-main
```

### 2. Windows

Using PowerShell:
```powershell
Invoke-WebRequest -Uri https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip -OutFile practicals.zip
Expand-Archive practicals.zip
cd practicals\practicals-main
```

Using Browser:
1. Open `github.com/PrashilD15/practicals`
2. Click `Code` -> `Download ZIP`
3. Extract the downloaded folder.

---

## Practicals List & Run Commands

| No. | Practical | Folder | Run Command |
|---|---|---|---|
| 1 | Shell Programming (Address Book) | `01_shell_programming` | `chmod +x address_book.sh && ./address_book.sh` |
| 2 | Fork & Sorting (Bubble and Insertion) | `02_process_fork_sorting` | `gcc fork_sort.c -o fork_sort && ./fork_sort` |
| 3 | Zombie and Orphan Process | `03_zombie_orphan` | `gcc zombie_orphan.c -o zombie_orphan && ./zombie_orphan` |
| 4 | Producer-Consumer (Semaphores & Mutex) | `04_producer_consumer` | `gcc prod_cons.c -lpthread -lrt -o prod_cons && ./prod_cons` |
| 5 | Dining Philosophers Problem | `05_dining_philosophers` | `gcc dining_philosophers.c -lpthread -o dining_philosophers && ./dining_philosophers` |
| 6 | Banker's Algorithm (Deadlock Avoidance) | `06_bankers_algorithm` | `gcc bankers.c -o bankers && ./bankers` |
| 7 | Anonymous Pipes IPC | `07_pipes_ipc` | `gcc pipes_comm.c -o pipes_comm && ./pipes_comm` |
| 8 | Named Pipes / FIFO IPC | `08_fifo_ipc` | Term 1: `gcc fifo_reader.c -o fifo_reader && ./fifo_reader`<br>Term 2: `gcc fifo_writer.c -o fifo_writer && ./fifo_writer` |
| 9 | Disk Scheduling (SSTF, SCAN, C-LOOK) | `09_disk_scheduling` | `gcc disk_sched.c -o disk_sched && ./disk_sched` |

---

## Viva Quick Notes

1. Shebang (`#!/bin/bash`): Specifies the interpreter used to run the script.
2. `fork()`: Creates a child process. Returns 0 to child, PID to parent, -1 on failure.
3. `wait()`: Parent process waits until child process completes.
4. Zombie process: Finished execution but still in process table because parent did not call `wait()`.
5. Orphan process: Parent terminated before child; adopted by init / systemd (PID 1).
6. Mutex vs Semaphore: Mutex is a locking mechanism (binary) owned by one thread. Semaphore is a signaling counter for managing multiple resources.
7. Banker's Algorithm: Used for deadlock avoidance by verifying safe state (Need = Max - Allocation <= Available).
8. Anonymous vs Named Pipes (FIFO): Anonymous pipe is for parent-child communication. Named pipe exists as a filesystem node (`mkfifo`) for unrelated processes.

---

## मराठी सूचना (Marathi Guide)

कॉलेज लॅबमध्ये फोन अलाउड नसतो, म्हणून हा लिंक लक्षात ठेवा:  
`github.com/PrashilD15/practicals`

### Ubuntu / Linux वर कोड कसा घ्यायचा:

Terminal उघडा आणि हा कमांड टाका:

Git असल्यास:
```bash
git clone https://github.com/PrashilD15/practicals.git
cd practicals
```

Git नसल्यास (Zip download आणि unzip एकाच कमांडमध्ये):
```bash
wget https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip -O practicals.zip && unzip practicals.zip && cd practicals-main
```

### Windows वर:

Browser मध्ये `github.com/PrashilD15/practicals` उघडा, हिरव्या `Code` बटनावर क्लिक करून `Download ZIP` करा आणि extract करा.

किंवा PowerShell मध्ये:
```powershell
Invoke-WebRequest -Uri https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip -OutFile practicals.zip; Expand-Archive practicals.zip; cd practicals\practicals-main
```

### प्रॅक्टिकल रन करण्याचे कमांड्स:

1. Address Book:
```bash
cd 01_shell_programming
chmod +x address_book.sh
./address_book.sh
```

2. Fork & Sorting:
```bash
cd 02_process_fork_sorting
gcc fork_sort.c -o fork_sort
./fork_sort
```

3. Zombie & Orphan:
```bash
cd 03_zombie_orphan
gcc zombie_orphan.c -o zombie_orphan
./zombie_orphan
```

4. Producer-Consumer:
```bash
cd 04_producer_consumer
gcc prod_cons.c -lpthread -lrt -o prod_cons
./prod_cons
```

5. Dining Philosophers:
```bash
cd 05_dining_philosophers
gcc dining_philosophers.c -lpthread -o dining_philosophers
./dining_philosophers
```

6. Banker's Algorithm:
```bash
cd 06_bankers_algorithm
gcc bankers.c -o bankers
./bankers
```

7. Anonymous Pipes:
```bash
cd 07_pipes_ipc
gcc pipes_comm.c -o pipes_comm
./pipes_comm
```

8. Named Pipes (FIFO):
दोन terminal मध्ये रन करा:
Terminal 1:
```bash
cd 08_fifo_ipc
gcc fifo_reader.c -o fifo_reader
./fifo_reader
```
Terminal 2:
```bash
cd 08_fifo_ipc
gcc fifo_writer.c -o fifo_writer
./fifo_writer
```

9. Disk Scheduling:
```bash
cd 09_disk_scheduling
gcc disk_sched.c -o disk_sched
./disk_sched
```

लॅब मॅन्युअलची PDF फाईल `OS_Practicals_Complete_Guide.pdf` याच रिपॉझिटरीमध्ये आहे.
