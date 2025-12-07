# Example-08 – Identifying Zombie Processes and Importance of sleep()<br>

## Purpose<br>
This document explains how to identify a zombie process in the system.<br>
It also describes the importance of using sleep() in orphan process examples.<br>

## How to Identify a Zombie Process<br>
A zombie process is a child process that has terminated but whose parent has not read its exit status.<br>
Zombie processes can be identified using system commands like `ps` or `top`.<br>
In `ps aux | grep Z`, the `STAT` column shows 'Z' for zombie processes.<br>
Zombie processes do not consume CPU or memory, but they occupy an entry in the process table.<br>

## Importance of sleep() in the Previous Code<br>
The sleep() function ensures that the child process (C2) waits until its parent process terminates.<br>
This guarantees that C2 becomes an orphan process.<br>
Without sleep(), the child might run while the parent is still alive, and orphan status would not be achieved.<br>

## Summary<br>
- Zombie process → STAT = Z in ps/top<br>
- sleep() → ensures child becomes orphan after parent exits<br>

