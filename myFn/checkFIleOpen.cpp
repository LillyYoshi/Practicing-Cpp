#include <string>
#include "myLib.h"
#include <iostream>
#include <fstream>


bool checkFileOpen(std::ofstream& outFile, const std::string& fileName)
{
    if (outFile.is_open())
    {
        std::cout << "File " << fileName << " opened successfully!\n";
        return true;
    }
    else 
    {
        std::cerr << "ERROR! Couldn't open file " << fileName << ".\n";
        return false;
    }
}