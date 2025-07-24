#include <iostream>
#include <iomanip>
#include "myLib.h"

using namespace std; // Makes it less repetitive to make table, only one namespace
/*
For this table I will be using three functions I have created;
square, cube, and factorial of a range of numbers inputted from user.
This will also be done via function. The table will be organized and
done using the iomanip library.
*/

int main() 
{
    // Setting the range of integers from user
    std::cout << "Enter the lower bound of your range.\n";
        int min{};
         getInt(min);
    std::cout << "Enter the upper bound of your range.\n";
        int max{};
         getInt(max);

     // Table Heading
         cout << setw(12) << left << fixed << "Number"
              << setw(12) << left << fixed << "Square"
              << setw(12) << left << fixed << "Cube"
              << setw(12) << left << fixed << "Factorial"
              << endl;

    // Initializing placeholder value
    double n = min; // Must be double as called functions are in double

    // Loop to run each value in range
    while (n<=max)
        {

         double sq = square(n);
         double cb = cube(n);
         double fac = factorial(n);
        
         // Table data
         cout << setw(12) << left << fixed << n
              << setw(12) << left << fixed << setprecision(4) << sq
              << setw(12) << left << fixed << setprecision(4) << cb
              << setw(12) << left << fixed << setprecision(4) << fac
              << endl;
        
            n++;
        }

    return 0;
}