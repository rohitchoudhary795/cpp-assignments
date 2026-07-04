#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("source.txt", ios::binary);
    ofstream outFile("destination.txt", ios::binary);

    if (!inFile || !outFile) {
        cerr << "Error opening files!\n";
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        outFile.put(ch);
    }

    cout << "File copied successfully!\n";
    return 0;
}