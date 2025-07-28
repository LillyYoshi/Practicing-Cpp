#include <iostream>
#include <vector>
#include "myLib.h"

/*
Using a std::vector, write a program that asks the user to enter 3 integral values. 
Print the sum and product of those values.

The output should match the following:

Enter 3 integers: 3 4 5
The sum is: 12
The product is: 60

--- I did not follow the instructions to a T as I can use already created functions
*/

int main() {

    // Initializing vector with 3 placeholders
    std::vector<int> sum(3); 

    std::cout << "Enter 3 Integers: \n";

    // Assigning 3 user input values from getInt fn
    int x{}, y{}, z{};
    sum[0] = getInt(x);
    sum[1] = getInt(y);
    sum[2] = getInt(z);

   int sumTotal {};

    // Sum of vector using loop
    for (size_t i {0}; i < sum.size(); i++) {
        sumTotal += sum[i];
    };

    std::cout << "The sum is: " << sumTotal << std::endl;
    
    int multTotal {1}; // Can't be 0 when working with mult

    // Product of vector using loop
     for (size_t i {0}; i < sum.size(); i++) {
        multTotal *= sum[i];
    };

    std::cout << "The product is: " << multTotal << std::endl;

return 0;
}