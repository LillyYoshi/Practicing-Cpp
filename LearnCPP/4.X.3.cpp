#include <iostream>

using namespace std;

int main()
{
    double initialHeight {};
    double height{};
    int time{};
    const double g {9.81};
    cout << "Enter height of tower in meters: ";
    cin >> initialHeight;

    height = initialHeight;

    do
    {

        height = initialHeight - (0.5 * g * time * time);

        if (height>0)
        {
            cout << "At " << time << " seconds, the ball is at height: " << height << " meters.\n";
        }
        else
        {
            cout << "At " << time << " seconds, the ball is on the ground.\n";
        }
           
        ++time;
    }
    while (height > 0);

    return 0;
}