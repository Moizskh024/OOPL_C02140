#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
    int songID;
    string songTitle;
    string artistName;
    string albumName;
    string genre;
    string duration;
    string playlist;

public:

    // Default Constructor
    Song()
    {
        songID = 0;
        songTitle = "Unknown";
        artistName = "Unknown";
        albumName = "Unknown";
        genre = "Unknown";
        duration = "0:00";
        playlist = "Unknown";

        cout << "\n[Default Constructor Called]" << endl;
    }

    // Parameterized Constructor
    Song(int id, string title, string artist, string album, string g, string d, string p)
    {
        songID = id;
        songTitle = title;
        artistName = artist;
        albumName = album;
        genre = g;
        duration = d;
        playlist = p;

        cout << "\n[Parameterized Constructor Called]" << endl;
    }

    // Copy Constructor
    Song(const Song &s)
    {
        songID = s.songID;
        songTitle = s.songTitle;
        artistName = s.artistName;
        albumName = s.albumName;
        genre = s.genre;
        duration = s.duration;
        playlist = s.playlist;

        cout << "\n[Copy Constructor Called]" << endl;
    }

    // Accept song details
    void accept()
    {
        cout << "Enter Song ID: ";
        cin >> songID;
        cin.ignore();

        cout << "Enter Song Title: ";
        getline(cin, songTitle);

        cout << "Enter Artist Name: ";
        getline(cin, artistName);

        cout << "Enter Album Name: ";
        getline(cin, albumName);

        cout << "Enter Genre: ";
        getline(cin, genre);

        cout << "Enter Duration: ";
        getline(cin, duration);

        cout << "Enter Playlist/Category: ";
        getline(cin, playlist);
    }

    // Display song details
    void display()
    {
        cout << "Song ID           : " << songID << endl;
        cout << "Song Title        : " << songTitle << endl;
        cout << "Artist Name       : " << artistName << endl;
        cout << "Album Name        : " << albumName << endl;
        cout << "Genre             : " << genre << endl;
        cout << "Duration          : " << duration << endl;
        cout << "Playlist/Category : " << playlist << endl;
    }

    // Destructor
    ~Song()
    {
        cout << "[Destructor Called - Song Object Destroyed]" << endl;
    }
};

int main()
{
    cout << "========================================" << endl;
    cout << "     ONLINE MUSIC MANAGEMENT SYSTEM" << endl;
    cout << "========================================" << endl;

    // 1. Default Constructor
    cout << "\n1. CREATING OBJECT USING DEFAULT CONSTRUCTOR" << endl;

    Song song1;

    cout << "\n-----Initial Song Details -----" << endl;
    song1.display();

    // Accept user details
    cout << "\nEnter details for Song 1:" << endl;
    song1.accept();

    cout << "\nDetails of Song 1:\n";
    song1.display();

    // 2. Parameterized Constructor
    cout << "\n\n2. CREATING OBJECT USING PARAMETERIZED CONSTRUCTOR" << endl;

    Song song2(101, "Perfect", "Ed Sheeran", "Divine", "Pop", "4:23", "Romantic");

    cout << "\nDetails of song 2:\n";
    song2.display();

    // 3. Copy Constructor
    cout << "\n\n3. CREATING OBJECT USING COPY CONSTRUCTOR" << endl;

    Song song3(song2);

    cout << "\nDetails of song 3:\n";
    song3.display();

    cout << "\n\n========================================" << endl;
    cout << "Program Ending..." << endl;
    cout << "Destructors will now be called." << endl;
    cout << "========================================" << endl;

    return 0;
}
