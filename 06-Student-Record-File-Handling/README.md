# Practical 06: Student Record File Handling

## Problem statement

Write a C++ program that demonstrates the use of file stream classes (ofstream, ifstream, or fstream) to perform the following operations: Create and open a text file in write mode. Write student details such as name, age and roll number in a formatted manner. Close the file properly to ensure data is saved. Reopen the file in read mode. Read and display the stored student information from the file.

## Concepts demonstrated

File streams using ofstream and ifstream, binary file write/read, and class-based student records.

## Source file

- `student_records.cpp`

## Compile and run

From this folder:

```bash
g++ -std=c++17 -Wall -Wextra student_records.cpp -o practical
./practical
```

On Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra student_records.cpp -o practical.exe
.\practical.exe
```

## Notes

This source file is transcribed from the practical record supplied for this repository. Formatting and spacing have been normalized for readability; the program logic has not intentionally been redesigned.
