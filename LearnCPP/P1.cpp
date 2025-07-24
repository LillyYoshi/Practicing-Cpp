#include <iostream>
using namespace std;

int main()
{
    int number, total;

    number = 0;

    total = 0;

    cout << "Enter numbers to add up. Enter -1 to stop." << endl;

    while (number != -1)
    {
        cout << "Enter number: ";
        cin >> number;

        if (number == -1)
        {
            break;
        }

        total += number;
    }

    cout << "The total sum is: " << total << endl;

    return 0;
}
