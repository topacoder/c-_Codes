#include<iostream>
using namespace std;

class Address{
    public: 
    int houseNo;
    string street;
    string city;
    string state;

    Address(){
        houseNo = 0;
        street = "";
        city = "";
        state = "";
    }

    void Accept(){
        cout<<"Enter house number: ";
        cin>>houseNo;
        cout<<"Enter street name: ";
        getline(cin, street);
        cin.ignore();
        cout<<"Enter city name: ";
        cin>>city;
        cout<<"Enter state name: ";
        cin>>state;
    }

    void Display(){
        cout<<"House Number: "<<houseNo<<endl;
        cout<<"Street name: "<<street<<endl;
        cout<<"City name: "<<city<<endl;
        cout<<"State name: "<<state<<endl;
    }
};

class Student{
    public: 
    string name;
    int age;
    int rollNo;
    Address address;

    Student(){
        name = "";
        age = 0;
        rollNo = 0;
    }

    Student(string name, int age, int rollNo, Address address){
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
        this->address = address;
    }

    void Accept(){
        cout<<"Enter name: \n";
        cin>>name;
        cout<<"Enter age: \n";
        cin>>age;
        cout<<"Enter rollNo: \n";
        cin>>rollNo;
        cout<<"Enter addresss: \n";
        address.Accept();
    }

    void Display(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollNo: "<<rollNo<<endl;
        address.Display();
    }
};

int main()
{
    vector<Student> students;

    Student s;
    s.Accept();
    s.Display();
    students.push_back(s);

    for(int i=0; i<students.size(); i++){
        students[i].Display();
    }
    return 0;
}