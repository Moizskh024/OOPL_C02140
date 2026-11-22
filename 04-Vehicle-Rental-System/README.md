# Practical 04: Vehicle Rental System

## Problem statement

Design a C++ program for a Vehicle Rental System that manages different types of vehicles such as Car, Bike, and Truck. Make the base class abstract by declaring a pure virtual function, and use a virtual destructor to ensure proper memory clean up when deleting derived class objects via base class pointers. Make use of new and delete operators.

## Concepts demonstrated

Abstract classes, pure virtual functions, runtime polymorphism, virtual destructor, dynamic allocation using new and delete.

## Source file

- `vehicle_rental.cpp`

## Compile and run

From this folder:

```bash
g++ -std=c++17 -Wall -Wextra vehicle_rental.cpp -o practical
./practical
```

On Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra vehicle_rental.cpp -o practical.exe
.\practical.exe
```

## Notes

This source file is transcribed from the practical record supplied for this repository. Formatting and spacing have been normalized for readability; the program logic has not intentionally been redesigned.
