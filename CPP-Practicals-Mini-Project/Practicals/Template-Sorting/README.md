# Practical 08: Sorting Using Function Templates

## Problem statement

Create a function template for selection/bubble/insertion sort that takes an array (of integers or floats), sorts it in ascending order, and then outputs the sorted array. The function should work with both integer and floating-point arrays. The program should: Define a template function sort () that accepts an array and its size as input, Sort the array in ascending order using the sorting algorithm, Display the sorted array, Use the same function template to handle both integer arrays and floating-point arrays.

## Concepts demonstrated

Function templates and selection sort for integer, character and floating-point arrays.

## Source file

- `template_sorting.cpp`

## Compile and run

From this folder:

```bash
g++ -std=c++17 -Wall -Wextra template_sorting.cpp -o practical
./practical
```

On Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra template_sorting.cpp -o practical.exe
.\practical.exe
```

## Notes

This source file is transcribed from the practical record supplied for this repository. Formatting and spacing have been normalized for readability; the program logic has not intentionally been redesigned.
