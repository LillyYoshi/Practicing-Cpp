#include <iostream>
#include "myLib.h"

/*
My goal for this program is to use references
to double a user inputted value by way of a function.
I will not be calling a reference function from a seperate file
but will create the reference functions in this file.
*/

int refDouble(const int& x)
    {
        return x * 2;
    }

int main()
{
    // Getting user inputted variable
    int x{};
    getInt(x);

    int doubled = refDouble(x);
    std::cout << "Your value doubled is: " << doubled << std::endl;

    return 0;
}