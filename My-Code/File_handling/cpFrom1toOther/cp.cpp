#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("first.txt", ios::in);
    ofstream fout("second.txt", ios::out);

    if(!fout){
        cout<<"Cannot open file for output"<<endl;
        return 1;
    }

    if(!fin){
        cout<<"Cannot read from file"<<endl;
        return 1;
    }

    char ch;

    while(fin.get(ch)){
        fout.put(ch);
    }

    cout<<"File copied successfully"<<endl;
    fout.close();
    fin.close();
    return 0;
}