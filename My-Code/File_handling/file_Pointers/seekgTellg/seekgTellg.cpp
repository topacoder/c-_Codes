#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ofstream fout("file.txt");
    fout << "This is a test file\n";
    fout.close();   

    // Opening the file for reading
    ifstream fin("file.txt");

    if (!fin) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Initial position of get pointer: " << fin.tellg() << endl;

    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }

    cout << "\nPosition after reading file: " << fin.tellg() << endl;

    fin.clear(); //clearing the eof flag
    fin.seekg(5, ios::beg);

    cout << "Position after seekg(5, ios::beg): " << fin.tellg() << endl;

    while (fin.get(ch)) {
        cout << ch;
    }

    cout << "\nFinal position of get pointer: " << fin.tellg() << endl;

    fin.close();
    return 0;
}