# Practical 02: Bank Account Management System

## Problem statement

Design a class Bank Account to manage account data in a bank. Each account should store information such as: Account Number, Account Holder Name, Account Balance, Account Type (Savings/Current) Write a program to: a) Allow entry of account details b) Display account information c) Track the total number of accounts created using this pointer and a static variable d) Use a static function to display the total account count e) Use a friend function to access and compare the balance of two accounts f) Use an inline function to calculate interest or updated balance for an account

## Concepts demonstrated

Classes, constructors, this pointer, static data members, static functions, friend functions and inline functions.

## Source file

- `bank_account.cpp`

## Compile and run

From this folder:

```bash
g++ -std=c++17 -Wall -Wextra bank_account.cpp -o practical
./practical
```

On Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra bank_account.cpp -o practical.exe
.\practical.exe
```

## Notes

This source file is transcribed from the practical record supplied for this repository. Formatting and spacing have been normalized for readability; the program logic has not intentionally been redesigned.
