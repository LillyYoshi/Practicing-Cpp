#include <iostream>
using namespace std;

int main()
{
    int choice {};

    while (choice != 3)
    {
        cout << "Pick a number (1-3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You picked one." << endl;
            break;
        case 2:
            cout << "Two is good." << endl;
            break;
        case 3:
            cout << "Three works too." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    }

    cout << "Done!" << endl;

    return 0;
}
