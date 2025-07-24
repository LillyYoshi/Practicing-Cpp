#include <iostream>

int add(int x, int y);

int main()
{
    int x{add(3, 4)};

    std::cout << x;

    return 0;
}