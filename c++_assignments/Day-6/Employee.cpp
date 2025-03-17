#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Employe{
    public:

    int empNo;
    string name;
    double salary;
    string dept;

    void Accept(){
        cout<<"Enter your empNo \n";
        cin>>empNo;

        cin.ignore(); //this line ignores the newline after the empNo input

        cout<<"Enter your name \n";
        getline(cin, name);

        cout<<"Enter your salary \n";
        cin>>salary;

        cin.ignore(); //this line ignores the newline after the salary input

        cout<<"Enter your department \n";
        getline(cin, dept);
    }

    void print(){
        cout<<"empNo = "<<empNo<<"\n";
        cout<<"name = "<<name<<"\n";
        cout<<"dept = "<<dept<<"\n";
    }
};

bool compareEmp(const Employe &e1, const Employe &e2){
    if(e1.salary != e2.salary) return e1.salary > e2.salary;
    if(e1.name != e2.name) return e1.name > e2.name;
    return e1.empNo > e2.empNo;
}

int main()
{
    int n;
    cin>>n;
    vector<Employe> emp(n);

    for(int i=0; i<n; i++){
        emp[i].Accept();
    }

    sort(emp.begin(), emp.end(), compareEmp);

    cout<<"Displaying the sorted emplyees \n";
    for(int i=0; i<n; i++){
        emp[i].print();
    }
    return 0;
}