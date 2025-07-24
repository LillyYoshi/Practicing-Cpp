#include <iostream>
using namespace std;

// Converts degrees Fahrenheit to Celsius
double toCelsius(double fahr);
// Removed function body as I call function from files

// Convert degrees Fahrenheit to Kelvin
double toKelvin(double fahr);
// Removed function body as I call function from files

int main()
{
    // Convert a variety of commonly-known temperatures into Celsius and Kelvin on different lines
    cout << toCelsius(90) << "° C is hot! Time to go to the pool." << endl;
    cout << toKelvin(90) << "° K is hot! Time to go to the pool." << endl;
    cout << toCelsius(60) << "° C is jacket weather." << endl;
    cout << toKelvin(60) << "° K is jacket weather." << endl;
    cout << toCelsius(33) << "° C is just barely above freezing." << endl;
    cout << toKelvin(33) << "° K is just barely above freezing." << endl;
    cout << toCelsius(24) << "° C is below freezing!" << endl;
    cout << toKelvin(24) << "° K is below freezing!" << endl;
    cout << toCelsius(451) << "° C: The temperature at which paper books will spontaneously combust." << endl;
    cout << toKelvin(451) << "° K: The temperature at which paper books will spontaneously combust." << endl;

    // Prompt user for one last temperature to convert into Celsius and Kelvin
    double myTempF{};
    double myTempC{};
    double myTempK{};
    cout << "Enter your own temperature in ° F:" << endl;
    cin >> myTempF;
    myTempC = toCelsius(myTempF); // Call toCelsius function
    myTempK = toKelvin(myTempF);  // Call toKelvin function
    cout << "Excellent choice! ";
    cout << myTempF << "° F is " << myTempC << "° C." << endl;
    cout << myTempF << "° F is " << myTempK << "° K too." << endl;
    cout << "All done!" << endl;

    return 0;
}