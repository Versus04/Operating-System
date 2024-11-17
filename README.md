# 🖥️ Operating System Concepts Implementation


This repository contains practical implementations of fundamental Operating System concepts and mechanisms. Each implementation is thoroughly documented and includes example usage.

## 📚 Table of Contents
- [Overview](#overview)
- [Topics Covered](#topics-covered)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## 🎯 Overview

This repository serves as a comprehensive collection of Operating System programming concepts implemented in C and Java. Perfect for students, developers, and anyone interested in understanding OS internals through practical coding examples.

## 💡 Topics Covered

### 1. System Calls - Process Management
- Implementation of `fork()`, `exit()`, `wait()`, and `exec()` system calls
- Demonstrates process creation, termination, and parent-child relationships
- Examples of process synchronization

### 2. File Operations System Calls
- Implementation of `open()`, `read()`, and `write()` operations
- File handling and management demonstrations
- Error handling and file permissions

### 3. CPU Scheduling Algorithms
- **First Come First Serve (FCFS)** ⏱️
  - Non-preemptive scheduling implementation
  - Process timing and turnover analysis
- **Round Robin Scheduling** 🔄
  - Time quantum based scheduling
  - Context switching demonstration
- **Priority Scheduling** ⭐
  - Priority-based process execution
  - Priority queue implementation

### 4. Multithreading
- **Java Implementation** ☕
  - Thread creation and management
  - Synchronization mechanisms
  - Thread pool demonstrations
- **Pthread Implementation** 🧵
  - POSIX thread programming
  - Thread synchronization
  - Mutex and semaphore usage

### 5. Inter-Process Communication
- **Pipe Implementation** 📡
  - Parent-child process communication
  - Data transfer demonstrations
  - Bidirectional communication examples

## ⚙️ Prerequisites
- GCC Compiler (version 7.0+)
- Java Development Kit (JDK 11+)
- POSIX-compliant operating system
- Make utility

## 🛠️ Installation

```bash
# Clone the repository
git clone https://github.com/username/os-concepts-implementation.git

# Navigate to the project directory
cd os-concepts-implementation

# Compile C programs
make all

# Compile Java programs
javac src/java/*.java
```

## 🚀 Usage

Each topic has its own directory with specific instructions and examples:

```bash
# For System Calls
cd system-calls
./fork_example

# For Scheduling Algorithms
cd scheduling
./fcfs_scheduler

# For Multithreading (Java)
cd multithreading/java
java ThreadExample

# For Multithreading (Pthread)
cd multithreading/pthread
./pthread_example

# For IPC
cd ipc
./pipe_example
```

## 👥 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



## 🌟 Star this Repository

If you find this repository useful, please consider giving it a star! It helps others discover this resource.

---
Made with ❤️ by Shubham 