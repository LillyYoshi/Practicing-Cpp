#include <iostream>
using namespace std;

int main()
{
    int n {};

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)   
    {
        cout << i;

        if (i % 2 == 0)
            cout << " (even)\n";
        else
            cout << " (odd)\n";
    }

    cout << "Done!\n";

    return 0;
}
