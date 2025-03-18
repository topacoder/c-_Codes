#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    //fout stands for showing the output on the file
    ofstream fout("write.txt", ios::out);
    if(!fout){
        cout<<"file not found"<<endl;
        fout.close();
    }
    fout<<"Hello there Keep working on file handling"<<endl;
    int a;
    cin>>a;

    cout<<a;
    fout<<"The variable inpute is "<<a<<endl;
    return 0;
}