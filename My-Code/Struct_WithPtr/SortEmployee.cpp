#include<iostream>
using namespace std;

class Employee{
    public:
    int empNo;
    string name;
    double salary;
    string dept;

    void Accept(){
        cout<<"Enter Employee Number: ";
        cin>>empNo;
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Employee Salary: ";
        cin>>salary;
        cout<<"Enter Employee Department: ";
        cin>>dept;
    }

    void Display(){
        cout<<"Employee Number: "<<empNo<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee Department: "<<dept<<endl;
    }
};

int cmpEmployee(Employee &e1, Employee &e2){
    if(e1.salary > e2.salary) return e1.salary;
    else return e2.salary;
}

int main()
{
    int n;
    cout<<"Enter number of employees you want to enter: ";
    cin>>n;
    vector<Employee> v(n);
    for(int i=0; i<n; i++){
        v[i].Accept();
    }

    sort(v.begin(), v.end(), cmpEmployee);
    cout<<"Sorted Employees based on Salary: "<<endl;
    for(int i=0; i<n; i++){
        v[i].Display();
    }


    return 0;
}