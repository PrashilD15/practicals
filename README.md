# 🚀 Operating System Practicals - Official Lab Manual, Code & Viva Guide

> **Easy-to-Remember URL (कॉलेज कॉम्प्युटरवर टाईप करण्यासाठी सोपा पत्ता):**
> ### `github.com/PrashilD15/practicals`
> *(कॉलेजमध्ये फोन अलाउड नसताना फक्त एवढंच लक्षात ठेवा: `github.com/PrashilD15/practicals`)*

---

## ⚡ Quick 1-Line Commands (कॉलेजमध्ये फास्ट डाउनलोड व रन करण्यासाठी)

### 🐧 1. On Ubuntu / Linux Lab Computers

#### Option A: Using `git clone` (Recommended if git is installed)
```bash
git clone https://github.com/PrashilD15/practicals.git
cd practicals
```

#### Option B: Direct ZIP Download (Fastest, no git needed!)
```bash
wget -O practicals.zip https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip && unzip practicals.zip && cd practicals-main
```
*(If `wget` is not found, use `curl`)*:
```bash
curl -L -o practicals.zip https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip && unzip practicals.zip && cd practicals-main
```

---

### 🪟 2. On Windows Lab Computers

#### Option A: Using PowerShell (Fast 1-liner download & extract)
Open **PowerShell** and paste:
```powershell
Invoke-WebRequest -Uri https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip -OutFile practicals.zip; Expand-Archive practicals.zip; cd practicals\practicals-main
```

#### Option B: Using Git Bash / Command Prompt
```cmd
git clone https://github.com/PrashilD15/practicals.git
cd practicals
```

#### Option C: Direct Browser Download
1. Open Chrome/Edge and go to: `https://github.com/PrashilD15/practicals`
2. Click the green **Code** button -> **Download ZIP**.
3. Right click the downloaded zip -> **Extract All**.

---

### 📄 Direct Lab Manual PDF Download
If you or your friends just want the official PDF manual (`OS_Practicals_Complete_Guide.pdf`):
- Click on [`OS_Practicals_Complete_Guide.pdf`](./OS_Practicals_Complete_Guide.pdf) in this repository and click **Download Raw**.
- Or via Linux terminal:
  ```bash
  wget https://raw.githubusercontent.com/PrashilD15/practicals/main/OS_Practicals_Complete_Guide.pdf
  ```

---

## 📂 Practicals Quick Execution Table (कसे रन करायचे)

| # | Practical Name | Folder | File(s) | Compilation & Execution Command |
|---|----------------|--------|---------|---------------------------------|
| **1** | **Shell Programming (Address Book)** | `01_shell_programming` | `address_book.sh` | `chmod +x address_book.sh && ./address_book.sh` |
| **2** | **Fork & Sorting Array (Bubble/Insertion)** | `02_process_fork_sorting` | `fork_sort.c` | `gcc fork_sort.c -o fork_sort && ./fork_sort` |
| **3** | **Zombie & Orphan Process** | `03_zombie_orphan` | `zombie_orphan.c` | `gcc zombie_orphan.c -o zombie_orphan && ./zombie_orphan` |
| **4** | **Producer-Consumer (Semaphores & Mutex)** | `04_producer_consumer` | `prod_cons.c` | `gcc prod_cons.c -lpthread -lrt -o prod_cons && ./prod_cons` |
| **5** | **Dining Philosophers Problem** | `05_dining_philosophers` | `dining_philosophers.c` | `gcc dining_philosophers.c -lpthread -o dining_philosophers && ./dining_philosophers` |
| **6** | **Banker's Algorithm (Deadlock Avoidance)** | `06_bankers_algorithm` | `bankers.c` | `gcc bankers.c -o bankers && ./bankers` |
| **7** | **Anonymous Pipes (IPC)** | `07_pipes_ipc` | `pipes_comm.c` | `gcc pipes_comm.c -o pipes_comm && ./pipes_comm` |
| **8** | **Named Pipes / FIFOs (IPC)** | `08_fifo_ipc` | `fifo_reader.c`<br>`fifo_writer.c` | **Term 1:** `gcc fifo_reader.c -o fifo_reader && ./fifo_reader`<br>**Term 2:** `gcc fifo_writer.c -o fifo_writer && ./fifo_writer` |
| **9** | **Disk Scheduling (SSTF, SCAN, C-LOOK)** | `09_disk_scheduling` | `disk_sched.c` | `gcc disk_sched.c -o disk_sched && ./disk_sched` |

---

## 🚩 Viva Preparation Guide (तोंडी परीक्षेसाठी महत्त्वाचे प्रश्न)

1. **Shebang (`#!/bin/bash`)**: Tells the OS kernel which interpreter should execute this script.
2. **`fork()` system call**: Creates a child process. Returns `0` to child, positive PID to parent, and `-1` on failure.
3. **`wait()` system call**: Suspends the calling parent process until one of its children terminates.
4. **Zombie vs Orphan Process**:
   - **Zombie Process**: Process that completed execution, but still exists in process table because parent hasn't read exit status using `wait()`.
   - **Orphan Process**: Process whose parent terminated before it. Orphan is adopted by `systemd` or `init` (PID 1).
5. **Mutex vs Semaphore**:
   - **Mutex**: Mutual exclusion binary lock, owned by a single thread.
   - **Counting Semaphore**: Synchronization tool maintaining an integer count for multiple shared resources.
6. **Deadlock Conditions (Coffman Conditions)**: Mutual Exclusion, Hold and Wait, No Preemption, Circular Wait.
7. **Banker's Algorithm**: Deadlock avoidance algorithm. Safe state exists if there is at least one sequence allowing all processes to finish without deadlocking. $Need = Max - Allocation$.
8. **Anonymous Pipe vs FIFO (Named Pipe)**:
   - Anonymous pipe: Used for IPC between related processes (parent-child).
   - Named pipe (FIFO): File in filesystem (`mkfifo`), enables IPC between completely unrelated processes.

---

<br>

# 🇮🇳 मराठी मार्गदर्शक (मराठी विद्यार्थ्यांसाठी सोप्या भाषेत)

नमस्कार मित्रांनो! कॉलेजच्या लॅबमध्ये फोन वापरण्याची परवानगी नसते, त्यामुळे हा कोड आणि प्रॅक्टिकल्स पटकन मिळवण्यासाठी खालील सोप्या स्टेप्स वापरा:

### 📌 लक्षात ठेवायचा पत्ता (फक्त एवढंच लक्षात ठेवा):
```
github.com/PrashilD15/practicals
```

---

### 💻 Ubuntu / Linux लॅब कॉम्प्युटरवर कसे वापरायचे?

#### पर्याय १: `git clone` (सर्वात सोपा)
कॉलेजच्या Linux कॉम्प्युटरवर **Terminal** (`Ctrl + Alt + T`) उघडा आणि हा एकच कमांड टाईप करा:
```bash
git clone https://github.com/PrashilD15/practicals.git
cd practicals
```

#### पर्याय २: Git नसेल तर थेट ZIP डाऊनलोड आणि Unzip करा (१ सेकंदात):
Terminal मध्ये खालील कमांड पेस्ट करा:
```bash
wget -O practicals.zip https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip && unzip practicals.zip && cd practicals-main
```

---

### 🖥️ Windows लॅब कॉम्प्युटरवर कसे वापरायचे?

1. ब्राऊझर (Chrome / Edge) उघडा आणि टाईप करा: `github.com/PrashilD15/practicals`
2. हिरव्या रंगाच्या **Code** बटनावर क्लिक करा आणि **Download ZIP** निवडा.
3. डाऊनलोड झालेली फाईल Right Click करून **Extract All** करा.
4. किंवा **PowerShell** उघडून हा कमांड टाका:
   ```powershell
   Invoke-WebRequest -Uri https://github.com/PrashilD15/practicals/archive/refs/heads/main.zip -OutFile practicals.zip; Expand-Archive practicals.zip; cd practicals\practicals-main
   ```

---

### 📁 प्रत्येक प्रॅक्टिकल चालवण्याची रीत (How to Run in Marathi):

1. **Practical 1 (Address Book Shell Script):**
   ```bash
   cd 01_shell_programming
   chmod +x address_book.sh
   ./address_book.sh
   ```

2. **Practical 2 (Fork & Sorting Array):**
   ```bash
   cd 02_process_fork_sorting
   gcc fork_sort.c -o fork_sort
   ./fork_sort
   ```

3. **Practical 3 (Zombie & Orphan Process):**
   ```bash
   cd 03_zombie_orphan
   gcc zombie_orphan.c -o zombie_orphan
   ./zombie_orphan
   ```

4. **Practical 4 (Producer-Consumer with Semaphores):**
   *(टीप: Threading साठी `-lpthread -lrt` लावणे आवश्यक आहे)*
   ```bash
   cd 04_producer_consumer
   gcc prod_cons.c -lpthread -lrt -o prod_cons
   ./prod_cons
   ```

5. **Practical 5 (Dining Philosophers):**
   ```bash
   cd 05_dining_philosophers
   gcc dining_philosophers.c -lpthread -o dining_philosophers
   ./dining_philosophers
   ```

6. **Practical 6 (Banker's Algorithm - Deadlock Avoidance):**
   ```bash
   cd 06_bankers_algorithm
   gcc bankers.c -o bankers
   ./bankers
   ```

7. **Practical 7 (Anonymous Pipes IPC):**
   ```bash
   cd 07_pipes_ipc
   gcc pipes_comm.c -o pipes_comm
   ./pipes_comm
   ```

8. **Practical 8 (FIFO / Named Pipe IPC):**
   दोन वेगवेगळ्या Terminal विंडो उघडा:
   - **Terminal 1 (Reader आधी चालू करा):**
     ```bash
     cd 08_fifo_ipc
     gcc fifo_reader.c -o fifo_reader
     ./fifo_reader
     ```
   - **Terminal 2 (Writer चालू करा):**
     ```bash
     cd 08_fifo_ipc
     gcc fifo_writer.c -o fifo_writer
     ./fifo_writer
     ```

9. **Practical 9 (Disk Scheduling - SSTF, SCAN, C-LOOK):**
   ```bash
   cd 09_disk_scheduling
   gcc disk_sched.c -o disk_sched
   ./disk_sched
   ```

---

### 📄 संपूर्ण लॅब मॅन्युअल PDF फाईल:
याच रिपॉझिटरीमध्ये **`OS_Practicals_Complete_Guide.pdf`** ही अधिकृत मॅन्युअल फाईल दिलेली आहे, जी तुम्ही डाऊनलोड करून वाचू शकता.
Terminal वरून डाऊनलोड करण्यासाठी:
```bash
wget https://raw.githubusercontent.com/PrashilD15/practicals/main/OS_Practicals_Complete_Guide.pdf
```
All the best for your OS Practicals & Viva! 🎯
