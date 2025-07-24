#include "myLib.h"
#include <iostream>

int getInt(int &x)
{
    std::cout << "Enter a integer: ";
    std::cin >> x;
    return x;
}