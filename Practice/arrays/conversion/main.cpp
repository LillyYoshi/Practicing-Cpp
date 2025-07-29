#include <iostream>
#include <vector>

/*
Write a function template that takes a std::vector<T> and a signed 
integer index (such as int or ssize_t). The function should check 
if the index is valid (non-negative and less than the vector's size).
If valid, return the element at that index; if invalid, return or 
print an appropriate error message without causing runtime crashes. 
Make sure your code handles the signed/unsigned comparison issue properly.
*/

template <typename T>
T arr ( std::vector<T>& arr, ssize_t index)
{
    if (index >= 0 && static_cast<size_t>(index) < arr.size())
    {
        std::cout << "Element at index " << index << " is " << arr [index];
        return arr [index];
    }
    else
    {
        std::cerr << "ERROR! Element is missing at index " << index << "!\n";
        return 1;
    }
}


int main() 
{

std::vector<int> v1{ 0, 2, 4, 6, 8 };

std:: vector<double> v2{ 0.0, 3.3, 6.6, 12.12 };

arr(v1, 4);
arr(v2, 5);

    return 0;
}