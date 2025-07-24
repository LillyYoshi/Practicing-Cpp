#include <iostream>
#include <fstream>

/*
Process:
    Attempt to open a file.
    if the file opened:
        process it
        close it
    otherwise:
        print an error message
*/

using namespace std;

int main()
{
    ofstream outfile;       //cout replacement, outputs in the file

    // attempt to open...
    outfile.open("fstream_test.txt");

    //verify the file openened...
    if(outfile.is_open())
    {
        // process the file...
        outfile << 88 << endl;
        outfile << 66 << endl;
        outfile << 33 << endl;

        // close it
        outfile.close();
    }
    else 
    cout << "ERROR!\n";

    return 0;
}