#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    if (num > 5)
    {
        cout << "Greater than five.\n";
        cout << "This is always printed.\n";
    }
    if (num < 20)
    {
        cout << "Less than twenty.\n";
    }
    else
        cout << "Twenty or more.\n";

    return 0;
}
