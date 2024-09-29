# Questions

## 1. Forking and Variables
Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable (e.g., `x`) and set its value to something (e.g., `100`). 
- **What value is the variable in the child process?**
- **What happens to the variable when both the child and parent change the value of `x`?**

## 2. Forking and File Descriptors
Write a program that opens a file (using the `open()` system call) and then calls `fork()` to create a new process.
- **Can both the child and parent access the file descriptor returned by `open()`?**
- **What happens when they write to the file concurrently (i.e., at the same time)?**

## 3. Printing from Parent and Child
Write another program using `fork()`. The child process should print "hello", and the parent process should print "goodbye".
- **Can you ensure that the child process always prints first without calling `wait()` in the parent?**

## 4. Forking and Exec Variants
Write a program that calls `fork()` and then uses some form of `exec()` to run the program `/bin/ls`.
- **Try all variants of `exec()`, including:**
  - `execl()`
  - `execle()`
  - `execlp()`
  - `execv()`
  - `execvp()`
  - `execvpe()`
  
- **Why do you think there are so many variants of the same basic call?**

## 5. Forking and Waiting
Write a program that uses `wait()` in the parent process to wait for the child process to finish.
- **What does `wait()` return?**
- **What happens if you call `wait()` in the child process?**
