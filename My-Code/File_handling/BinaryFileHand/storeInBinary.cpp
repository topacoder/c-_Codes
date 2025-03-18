#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    int age;

    void Accept(){
        cout<<"Enter Roll No: ";
        cin>>rollNo;

        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter age: ";
        cin>>age;
    }

    void Display(){
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    Student s;
    s.Accept();

    //output the data in binary.dat file
    ofstream fout("binary.dat", ios::binary | ios::out);

    //writing the funciton into the binary.dat file
    //.write will always the data in block hence here the size of the block is mentioned
    //here the block is Student object
    fout.write((char*) &fout, sizeof(Student));
    fout.close();
    s.Display();

    // ifstream fin("binary.dat", ios::binary | ios::in);



    return 0;
}