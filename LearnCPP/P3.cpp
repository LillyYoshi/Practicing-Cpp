#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even.\n";
        int result = num / 2;
        cout << "Half of it is: " << result << endl;
    }
    else
    {
        cout << "Number is odd.\n";
        int result = num * 3;
        cout << "Triple it is: " << result << endl;
    }
    cout << "Done!" << endl;
    return 0;
}
