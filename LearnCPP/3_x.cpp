#include <iostream>

int readNumber()
{
    std::cerr << "readNumber() called\n";
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cerr << "writeAnswer() called\n";
    std::cout << "The quotient is: " << x << '\n';
}

int main()
{
    std::cerr << "main() called\n";
    int x{readNumber()};
    int y{readNumber()};

    writeAnswer(x / y);

    return 0;
}