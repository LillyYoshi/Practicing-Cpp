#include <iostream>

constexpr bool isEven(int x) 
{
    return (x % 2) == 0;
}

int main()
{

    int x{};
    std::cout << "Enter a integer: ";
    std::cin >> x;

    int val = isEven(x);

    if (val == 1)
    {
    std::cout << "Your number is even.\n";
    }
else 
{
    std::cout << "Your number is odd.";
}
    return 0;
}