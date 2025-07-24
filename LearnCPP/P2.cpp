#include <iostream>
using namespace std;

void showMenu()
{
    cout << "1. Add number\n";
    cout << "2. Show total\n";
    cout << "3. Quit\n";
}

int main()
{
    int choice, num, total;

    total = 0;
    choice = 0;
    num = 0;

    do
    {
        showMenu();
        cout << "Enter choice: ";
        cin >> choice;

        if (cin >> choice)
        {
            cout << "Invalid. Enter an integer: ";
            cin >> choice;
        }
        else
        {
        };

        switch (choice)
        {
        case 1:
            cout << "Enter number to add: ";
            cin >> num;
            total += num;
            break;

        case 2:
            cout << "Current total: " << total << endl;
            break;

        case 3:
            cout << "Goodbye\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 3);

    return 0;
}
