# Practical 01: Online Music Management System

## Problem statement

Develop a program in C++ to create a database for an Online Music Management System containing the following information: Song Title, Song ID, Artist Name, Album Name, Genre (Pop/Rock/Classical/Jazz, etc.), Duration, Playlist / Category. Construct the database with suitable member functions. Make use of: Constructor, Default Constructor, Copy Constructor, and Destructor. Perform the following operations: [Ty pe here] [Ty pe here] [Ty pe here] a) Add a new song record b) Display song details c) Play a song (increase play count / check availability if restricted) d) Add to playlist / remove from playlist e) View current song availability and play statistics

## Concepts demonstrated

Classes and objects, default/parameterized/copy constructors, destructor, member functions.

## Source file

- `music_management.cpp`

## Compile and run

From this folder:

```bash
g++ -std=c++17 -Wall -Wextra music_management.cpp -o practical
./practical
```

On Windows with MinGW:

```powershell
g++ -std=c++17 -Wall -Wextra music_management.cpp -o practical.exe
.\practical.exe
```

## Notes

This source file is transcribed from the practical record supplied for this repository. Formatting and spacing have been normalized for readability; the program logic has not intentionally been redesigned.
