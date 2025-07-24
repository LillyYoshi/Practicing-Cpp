#include <iostream>

int main()
{
    // Initializing variables
    double x{};
    double y{};
    char sym{};

    // Get user input
    std::cout << "Enter a double value: ";
    std::cin >> x;

    std::cout << "Enter a double value: ";
    std::cin >> y;

    // What mathematical symbol to use
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> sym;

    // Check which symbol
    switch (sym)
    {
    case '+':
        std::cout << x << " " << sym << " " << y << " is " << x + y << '\n';
        break;

    case '-':
        std::cout << x << " " << sym << " " << y << " is " << x - y << '\n';
        break;

    case '*':
        std::cout << x << " " << sym << " " << y << " is " << x * y << '\n';
        break;

    case '/':
        std::cout << x << " " << sym << " " << y << " is " << x / y << '\n';
        break;

    default:
        return 1;
        break;
    }
    return 0;
}