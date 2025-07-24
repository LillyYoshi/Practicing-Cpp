#pragma once // Fixes multicalls
#include <iostream>
#include <string>
#include <fstream>

// All forward declarations

// Fahr to Cels conversion
double toCelsius(double fahr);

// Fahr to Kelv conversion
double toKelvin(double fahr);

// Square root
double square(double n);

// Cube root
double cube(double n);

// Factorial
double factorial(double n);

// Get Integer
int getInt(int &x);

// Checking if file is open
bool checkFileOpen(std::ofstream& outFile, const std::string& fileName);

// Checking to see if file is empty
bool isFileEmpty(const std::string& fileName);