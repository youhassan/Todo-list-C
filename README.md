# C To-Do List Project

This is a command-line To-Do List application written in the C programming language.  

## Features

- Add new tasks
- View all saved tasks
- Delete tasks
- Tasks are saved in a file named `tasks.txt`
- Tasks are automatically loaded when the program starts

## How to Compile

Use the following command in the terminal (make sure you are in the root folder):
gcc src/main.c src/functions.c -Iinclude -std=c99 -o todo.exe

## How to Run

Use this command in PowerShell or Command Prompt:
.\todo.exe

## Sample Output

--- To-Do List Menu ---

Add Task

View Tasks

Delete Task

Exit
Enter your choice: 1
Enter task: Study for exam
Task added and saved successfully!

## About

This project was built by Youssef as a learning exercise in C programming.  

The goal was to practice:
- Writing modular code using multiple `.c` and `.h` files
- Building a simple user interface in the terminal
- Using file input/output (I/O) to store and load data
- Organizing a C project with a clean folder structure

This is one of the first full projects I’ve built in C.  
It helped understanding how real C programs are structured beyond small code snippets.
