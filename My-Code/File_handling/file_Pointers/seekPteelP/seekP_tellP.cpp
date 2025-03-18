#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("test.txt", ios::out);
    cout<<fout.tellp()<<endl; //this will tell location of current cursor

    fout<<"Happy Birthday \n";
    cout<<fout.tellp()<<endl;

    fout.seekp(-10, ios::end);
    fout<<"Holi";
    cout<<fout.tellp()<<endl;
    return 0;
}