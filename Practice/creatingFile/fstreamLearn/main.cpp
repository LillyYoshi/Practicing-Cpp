#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::app); // open for read/write/append
    if (!file.is_open()) {
        cout << "Cannot open file." << endl;
        return 1;
    }

    file << "Adding a new line.\n";    // Write to file
    file.seekg(0);                     // Go back to start
    string line;
    while (getline(file, line))
        cout << line << endl;          // Read and print file content

    file.close();
    return 0;
}
