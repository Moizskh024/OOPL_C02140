# C++ Practicals and Mini Project

**Student:** Moiz Shaikh  
**Course:** C++ Programming / Object-Oriented Programming  
**Compiler standard:** C++17

This repository contains nine C++ practical programs and a Digital E-Wallet mini project, organized by project name for easy navigation.

## Repository structure

```text
CPP-Practicals-Mini-Project/
├── Practicals/
│   ├── Music-Management-System/
│   │   ├── music_management.cpp
│   │   └── README.md
│   ├── Bank-Account-Management/
│   │   ├── bank_account.cpp
│   │   └── README.md
│   ├── Employee-Biodata/
│   │   ├── employee_biodata.cpp
│   │   └── README.md
│   ├── Vehicle-Rental-System/
│   │   ├── vehicle_rental.cpp
│   │   └── README.md
│   ├── Complex-Number-Operations/
│   │   ├── complex_numbers.cpp
│   │   └── README.md
│   ├── Student-Record-File-Handling/
│   │   ├── student_records.cpp
│   │   └── README.md
│   ├── Custom-Exception-Handling/
│   │   ├── custom_exceptions.cpp
│   │   └── README.md
│   ├── Template-Sorting/
│   │   ├── template_sorting.cpp
│   │   └── README.md
│   ├── STL-Vector-Management/
│   │   ├── stl_vector.cpp
│   │   └── README.md
└── Mini-Projects/
    └── Digital-E-Wallet/
        ├── digital_ewallet.cpp
        └── README.md
```

## Practicals

| Practical | Main concepts |
|---|---|
| [Music Management System](Practicals/Music-Management-System/) | Classes, constructors, copy constructor, destructor |
| [Bank Account Management](Practicals/Bank-Account-Management/) | `this` pointer, static members, friend and inline functions |
| [Employee Biodata](Practicals/Employee-Biodata/) | Multiple inheritance and virtual base class |
| [Vehicle Rental System](Practicals/Vehicle-Rental-System/) | Abstract class, virtual functions, polymorphism, `new` and `delete` |
| [Complex Number Operations](Practicals/Complex-Number-Operations/) | Operator overloading and stream operators |
| [Student Record File Handling](Practicals/Student-Record-File-Handling/) | `ofstream`, `ifstream`, binary file handling |
| [Custom Exception Handling](Practicals/Custom-Exception-Handling/) | Custom exception, `throw`, `try`, `catch` |
| [Template Sorting](Practicals/Template-Sorting/) | Templates and selection sort |
| [STL Vector Management](Practicals/STL-Vector-Management/) | Vector, search, sort, insert and delete |

## Mini project

### [Digital E-Wallet and Payment Management System](Mini-Projects/Digital-E-Wallet/)

A menu-driven C++17 application that simulates user registration, PIN login, wallet balance management, transfers, bill payments, mobile recharges, transaction history, transaction search/sort, support requests, and local file persistence.

## How to compile a practical

Open a terminal in the practical's folder and use the source filename shown in that folder. For example:

```bash
g++ -std=c++17 -Wall -Wextra music_management.cpp -o music_management
./music_management
```

Each practical folder contains its own README with the exact compile and run command.

## How to compile the mini project

```bash
cd Mini-Projects/Digital-E-Wallet
g++ -std=c++17 -Wall -Wextra digital_ewallet.cpp -o digital_ewallet
./digital_ewallet
```

## Notes

- Each practical is an independent program because each has its own `main()` function.
- The source code was extracted from the supplied practical record and organized into individual files. Whitespace was cleaned for readability.
- All nine practicals and the mini project were checked for successful compilation with `g++ -std=c++17`; compilation does not guarantee that every runtime path has been tested.
- The e-wallet is a classroom simulation, not a real financial service.

## License

Provided for academic and learning purposes. Add a license if you intend to distribute or reuse the code beyond your coursework.
