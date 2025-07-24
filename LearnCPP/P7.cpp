#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    for (int i = 0; i < x; i++)
     {   
    cout << i << " ";
     }
    if (x > 3)
        cout << "\nX is big enough.";
    else
        cout << "\nX is small enough.";

    cout << endl;

    return 0;
}
