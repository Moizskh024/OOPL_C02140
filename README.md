# C++ Object-Oriented Programming Lab Practicals

A collection of C++ lab practicals and a mini project completed as part
of the Object-Oriented Programming Laboratory (OOPL). This repository
demonstrates fundamental and intermediate C++ programming concepts,
including classes, constructors, inheritance, polymorphism, operator
overloading, file handling, exception handling, function templates, and
STL containers.

## Repository Contents

-   **9 C++ practicals** arranged in the same order as the practical
    record.
-   **1 mini project:** Digital E-Wallet and Payment Management System.
-   Individual source files and README documentation for each practical
    and the mini project.

## Practicals

### 1. Online Music Management System

Develop a database for an online music management system containing:

-   Song Title
-   Song ID
-   Artist Name
-   Album Name
-   Genre
-   Duration
-   Playlist / Category

**Concepts covered:** - Classes and objects - Default constructor -
Parameterized constructor - Copy constructor - Destructor - Member
functions - Data management

**Operations include:** - Add a new song record - Display song details -
Play a song and maintain play count - Add/remove songs from playlists -
View song availability and play statistics

**Source code:**
[`music_management.cpp`](01-Music-Management-System/music_management.cpp)

------------------------------------------------------------------------

### 2. Bank Account Management

Design a `BankAccount` class to manage bank account information.

**Data members include:** - Account Number - Account Holder Name -
Account Balance - Account Type

**Concepts covered:** - Static variables - Static member functions -
`this` pointer - Friend functions - Inline functions - Classes and
objects

**Operations include:** - Enter account details - Display account
information - Count total accounts created - Compare balances of two
accounts - Calculate interest / updated balance

**Source code:**
[`bank_account.cpp`](02-Bank-Account-Management/bank_account.cpp)

------------------------------------------------------------------------

### 3. Employee Bio-Data Using Multiple Inheritance

Create employee bio-data using multiple inheritance.

**Classes:** - `PersonalRecord` - `ProfessionalRecord` -
`AcademicRecord`

**Concepts covered:** - Multiple inheritance - Virtual base class -
Inheritance - Constructors - Member functions - Ambiguity resolution

The program accepts and displays personal, professional, and academic
information.

**Source code:**
[`employee_biodata.cpp`](03-Employee-Biodata/employee_biodata.cpp)

------------------------------------------------------------------------

### 4. Vehicle Rental System

Design a vehicle rental system for different types of vehicles such as:

-   Car
-   Bike
-   Truck

**Concepts covered:** - Abstract classes - Pure virtual functions -
Runtime polymorphism - Virtual destructors - Base and derived classes -
Dynamic memory allocation - `new` and `delete` operators

The base class is made abstract using a pure virtual function, while a
virtual destructor ensures proper cleanup of derived objects.

**Source code:**
[`vehicle_rental.cpp`](04-Vehicle-Rental-System/vehicle_rental.cpp)

------------------------------------------------------------------------

### 5. Complex Number Operations Using Operator Overloading

Implement a `Complex` class to represent complex numbers.

**Features:** - Default constructor - Parameterized constructor -
Addition of complex numbers - Multiplication of complex numbers - Input
using `>>` - Output using `<<`

**Concepts covered:** - Constructors - Operator overloading - Stream
operator overloading - Classes and objects

**Source code:**
[`complex_numbers.cpp`](05-Complex-Number-Operations/complex_numbers.cpp)

------------------------------------------------------------------------

### 6. Student Record File Handling

Demonstrate C++ file stream classes to store and retrieve student
information.

**Student details:** - Name - Age - Roll Number

**Concepts covered:** - `ofstream` - `ifstream` - File creation - File
writing - File reading - File closing

The program writes formatted student information to a text file and then
reopens the file to read and display the stored information.

**Source code:**
[`student_records.cpp`](06-Student-Record-File-Handling/student_records.cpp)

------------------------------------------------------------------------

### 7. User-Defined Exception Handling

Create a user-defined exception program to validate user eligibility.

**Conditions:** - Age must be between 18 and 55 - Monthly income must be
between ₹50,000 and ₹1,00,000 - City must be Pune, Mumbai, Bangalore, or
Chennai - User must have a 4-wheeler

**Concepts covered:** - Exception handling - User-defined exceptions -
`try` - `throw` - `catch`

If any condition is not satisfied, an appropriate exception is thrown.

**Source code:**
[`custom_exceptions.cpp`](07-Custom-Exception-Handling/custom_exceptions.cpp)

------------------------------------------------------------------------

### 8. Sorting Using Function Templates

Create a function template to sort arrays of different data types in
ascending order.

**Features:** - Define a template sorting function that accepts an array
and its size. - Sort integer and floating-point arrays. - Display the
sorted arrays. - Reuse the same function template for different data
types.

**Concepts covered:** - Function templates - Generic programming -
Arrays - Sorting algorithms

**Source code:**
[`template_sorting.cpp`](08-Template-Sorting/template_sorting.cpp)

------------------------------------------------------------------------

### 9. Item Management Using STL Vector

Design a C++ program that uses the STL `vector` container to store,
sort, and search a collection of item records.

**Item details:** - Item Code - Item Name - Cost - Quantity

**Concepts covered:** - STL vector - Iterators and algorithms -
Insertion and deletion - Searching - Sorting - Item record management

**Operations include:** - Input multiple item records - Sort items by
code, cost, or quantity - Search for an item by code or name - Display
sorted items and search results

**Source code:**
[`stl_vector.cpp`](09-STL-Vector-Management/stl_vector.cpp)

------------------------------------------------------------------------

## Mini Project

### Digital E-Wallet and Payment Management System

A menu-driven C++ console application that simulates the basic workflow
of a digital wallet.

**Features:** - User registration and PIN-based login - Wallet profile
and balance display - Add money to wallet - Transfer money between
registered users - Simulated bill payments and mobile recharges -
Transaction history, search, and sorting - Customer support request
queue - Stack demonstration for the latest transaction - Local file
handling to save user and transaction data

**Concepts and technologies used:** - Classes, objects, and
encapsulation - Constructors and enumerations - Structures - Operator
overloading - Exception handling - Function templates - STL containers:
`vector`, `map`, `list`, `stack`, and `queue` - File handling - Date and
time formatting

**Project files:** -
[`digital_ewallet.cpp`](Mini-Projects/Digital-E-Wallet/digital_ewallet.cpp) -
[Mini project README](Mini-Projects/Digital-E-Wallet/README.md)

> **Disclaimer:** This is an educational simulation only. It does not
> connect to a bank, UPI network, telecom provider, or real payment
> gateway. Do not use real PINs or sensitive financial information.

## How to Compile and Run

A C++17-compatible compiler such as GCC, Clang, or MSVC is required.

Compile an individual practical from its folder using:

``` bash
g++ -std=c++17 -Wall -Wextra source_file.cpp -o program
```

Run on Linux / macOS / WSL:

``` bash
./program
```

Run on Windows PowerShell with MinGW:

``` powershell
.\program.exe
```

Replace `source_file.cpp` with the source filename for the practical you
want to run. For exact commands and details, refer to the README inside
each practical's folder.

## Author

**Moiz Shaikh**\
**Roll No.: C02140**

------------------------------------------------------------------------

*Created for the C++ Object-Oriented Programming Laboratory.*
