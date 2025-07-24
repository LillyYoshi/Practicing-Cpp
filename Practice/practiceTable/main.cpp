#include <iostream>
#include <iomanip>
#include "myLib.h"

using namespace std;

/*
This is my first attempt at creating a good looking data
table that will show incrementing values of 10 for a 
temperature conversion table. Starting at Fahr, then converting
to Cels and Kelv. I will display these in a pretty table.
*/


int main () 
{
    // Table Heading
    cout << setw(12) << left << "Fahr"
         << setw(12) << left << "Cels"
         << setw(12) << left << "Kelv"
         << endl;

    // For loop for incrementing Fahr values

    double cels {};
    double kelv {}; 

    for (double fahr {}; fahr < 100; fahr += 10)
    {
    cels = toCelsius(fahr); // Calling f to c conversion function
    kelv = toKelvin(fahr); // Calling f to k conversion function

    cout << setw(12) << left << fahr
         << setw(12) << left << fixed << setprecision (2) << cels
         << setw(12) << left << fixed << setprecision (2) << kelv
         << endl;
    }

    return 0;
}