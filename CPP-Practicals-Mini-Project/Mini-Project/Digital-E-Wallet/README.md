# Digital E-Wallet and Payment Management System

A console-based C++17 mini project that simulates the core workflow of a digital wallet. Users can register, log in using a PIN, manage wallet funds, transfer money to other registered users, pay bills, recharge mobile numbers, and manage transaction records.

> This is an educational simulation. It does not connect to a bank, UPI network, telecom provider, or real payment gateway. Do not use real PINs or sensitive financial information.

## Features

- User registration and PIN-based login
- Wallet profile and balance display
- Add money to a wallet
- Transfer money between registered wallet users
- Bill payment and mobile recharge simulation
- Transaction history and transaction search
- Transaction sorting and highest-amount display
- Customer support request queue
- Stack demonstration for the latest transaction
- File handling to persist user and transaction data

## Concepts and C++ features

- Classes, objects, encapsulation and constructors
- Enumerations and structures
- Operator overloading
- Exception handling
- Function templates
- STL containers: `vector`, `map`, `list`, `stack`, and `queue`
- File streams and persistent storage
- Date/time formatting

## Files

- `digital_ewallet.cpp` — complete source code

## Requirements

- C++17-compatible compiler (GCC, Clang, or MSVC)

## Compile and run

Linux / macOS / WSL:

```bash
g++ -std=c++17 -Wall -Wextra digital_ewallet.cpp -o digital_ewallet
./digital_ewallet
```

Windows (MinGW):

```powershell
g++ -std=c++17 -Wall -Wextra digital_ewallet.cpp -o digital_ewallet.exe
.\digital_ewallet.exe
```

## Data files

The application uses local files for saving user and transaction information. Run the executable from a writable project directory so the application can create/read its data files. Keep generated data files private if they contain personal test information.

## Academic purpose

This mini project demonstrates how OOP concepts, STL containers, exception handling, and file handling can be combined in a menu-driven payment-management simulation.
