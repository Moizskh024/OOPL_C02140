# Practical 07: User-Defined Exception Handling

## Problem statement

Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet. a. User has age between 18 and 55. b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month. c. User stays in Pune/ Mumbai/ Bangalore / Chennai. d. User has 4-wheeler Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above. If any of the condition not met, then throw the exception.

## Concepts demonstrated

User-defined exception class, throw, try and catch, and validation of user criteria.

## Source file

- `custom_exceptions.cpp`

## Compile and run

From this folder:

```bash
g++ -std=c++17 -Wall -Wextra custom_exceptions.cpp -o practical
./practical
```

On Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra custom_exceptions.cpp -o practical.exe
.\practical.exe
```

## Notes

This source file is transcribed from the practical record supplied for this repository. Formatting and spacing have been normalized for readability; the program logic has not intentionally been redesigned.
