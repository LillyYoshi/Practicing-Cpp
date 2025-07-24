#include <iostream>
#include <fstream>
#include <iomanip>
#include "myLib.h"

/*
The goal of this code is to create a basic log
of hotel guests. In this code you will write down
guest names and their room number which will be 
outputted to a file and then read back. There will 
also be a clear for the book.
*/

using namespace std;

int main()
{
    ofstream outFile;   

    // Try to open
    outFile.open("guestbook.txt", ios::app);

    // Verify file opened
    if (!checkFileOpen(outFile, "guestbook.txt")) // If file didn't open, close
        return 1;

    // Seeing if file already has text
    bool isEmpty = isFileEmpty("guestbook.txt");

    // Creating file table, if not already there
    if (isEmpty)
    {
    outFile << setw(12) << fixed << "Guest First" 
            << setw(12) << fixed << "Guest Last"
            << setw(10) << fixed << "Room"
            << endl;
    }

    // User input for guest information
   
     string edit; // Declared outside loop so 'while' can read it
    do
    {
        cout << "Do you want to edit guestbook? 'y' or 'n': ";
        cin >> edit;
        if (edit == "y")
            {
                string first, last;
                int roomNumber;
                cout << "Enter guests first name: ";
                cin >> first;
                cout << "Enter guests last name: ";
                cin >> last;
                cout << "Enter guests room number: ";
                cin >> roomNumber;
       
            outFile << setw(12) << left << first
                    << setw(12) << left << last
                    << setw(10) << left << roomNumber
                    << endl;
            }
    }  while (edit == "y");
        
    
    cout << "Exiting Program.";
        outFile.close();
        
return 0;
}