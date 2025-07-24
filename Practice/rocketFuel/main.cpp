#include <iostream>
#include "myLib.h"

/*
I am going to be modeling a min rocket fuel tank
that is going to have a set fuel with some integer
and by way of reference will pass this value to a 
function that burns fuel. Since this was my first time
with this I used a tutorial of sorts, but the function
refuel will be my own.
*/

void burnFuel(int& fuel, int burnAmount)
{
    if (fuel >= burnAmount)
        {
            fuel -= burnAmount;
        }
    else 
        {
            fuel = 0;
        }
}

void refuel(int& fuel, int addAmount)
{
    fuel += addAmount;
}

int main ()
{
    int fuel = 100; // 100 gallons of fuel, max

    std::cout << "Initial fuel in tank: " << fuel << " gallons\n";

    int amntToBurn{};
    std::cout << "Enter how much fuel to burn: ";
    std::cin >> amntToBurn;

    burnFuel(fuel, amntToBurn);

    std::cout << "Fuel after burn: " << fuel << " gallons\n";

    int amntToAdd{};
    std::cout << "Enter how much to refuel: ";
    std::cin >> amntToAdd;

    refuel(fuel, amntToAdd);

    std::cout << "Fuel after refuel: " << fuel << std::endl;

    return 0;
}