#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0)
    {
        cout << "Counting: " << n << endl;
        n--;
    }

    cout << "Lift off!" << endl;

    return 0;
}
