#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    # if 0
    // Example 1: printing strings with setw function

    cout << setw(18) << "ZebraCode\n";
    
    // Example 2: using setprecision

    cout << "|" << setw(12) << fixed << setprecision(4) << 29.95 << "|\n";

    // Example 3: setting width and using left and right text justificiation

    cout << "|" << setw(22) << left << 2000 << "|\n";
    cout << "|" << setw(22) << right << 2000 << "|\n";
    
    // Example 4: using the setios flags
    
    cout << "|" << setw(10) <<  setiosflags(ios::left) << 1900 << "|\n"; 
    cout << "|" << setw(10) <<  setiosflags(ios::left) << 2000 << "|\n"; 
    cout << "|" << setw(10) <<  setiosflags(ios::left) << 3000 << "|\n"; 
    
    // Example 5: formatting with setw, left, right, and setprecision
    
    cout << "|" << setw(20) << right << setprecision(5) << exp(1.) << "|\n";
    cout << "|" << setw(20) << right << setprecision(5) << log(18.697) << "|\n";
    cout << "|" << setw(20) << right << setprecision(5) << log10(28.697) << "|\n";
    cout << "|" << setw(20) << right << setprecision(5) << M_PI << "|\n";
    
    // Example 6:  Displaying mathematical data with setw
    
    cout << setw(3) << 9 << endl
    << setw(3) << 32 << endl
    << setw(3) << 615 << endl
    << "---\n"
    << (9 + 32 + 615) << endl;
    
    // Example 6a: samething but interactively!
    
    int a, b, c;
    cout << "Enter three digits between 1 and 100: ";
    cin >> a >> b >> c; 
    
    cout << setw(3) << a << endl
    << setw(3) << b << endl
    << setw(3) << c << endl
    << "---\n"
    << (a + b + c) << endl;
    # endif

    // Example 7: working with put_money

    double cost = 989.58;

    cout << "The amount is: " << put_money(cost) << endl;

    return 0; 
}