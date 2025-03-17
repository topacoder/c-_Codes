#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee{
    public:
    string name;
    int empId;
    double salary;
    
    Employee(string name, int empId, double salary){
        this -> name = name;
        this -> empId = empId;
        this -> salary = salary;
    }

    virtual void calSalary() = 0; //pure virtual function
    
    virtual void Display(){
        cout<<"\n Employee name: "<<name<<endl;
        cout<<"\n Employee id: "<<empId<<endl;
        cout<<"\n Employee salary: "<<salary<<endl;
    }
};

class PermEmployee: public Employee{
    public:
    double hra;
    double ta;
    
    PermEmployee(string name, int empId, double salary, double hra, double ta): Employee(name, empId, salary){
        this -> name = name;
        this -> empId = empId;
        this -> salary = salary;
        this -> hra = hra;
        this -> ta = ta;
    }
    
    void calSalary() override{
        salary += ta + hra;
        cout<<"salary = "<<salary<<endl;
    }
    
    void Display() override {
        Employee::Display();
        cout<<"\n Type: Permanant Employee"
            <<"\n nHRA: "<<hra<<endl;
    }
};

class ContrEmployee: public Employee{
    public: 
    int hrs;
    double rate;
    
    ContrEmployee(string name, int empId, double salary, int hrs, double rate): Employee(name, empId, salary){
        this -> name = name;
        this -> empId = empId;
        this -> salary = salary;
        this -> hrs = hrs;
        this -> rate = rate;
    }
    
    void calSalary() override{
        salary = hrs * rate;
        cout<<"salary = "<<salary<<endl;
    }
    
    void Display (){
        Employee::Display();
        cout<<"\n Type: Contract based Employee"
            <<"\n Hours Worked = "<<hrs
            <<"\n Rate per Hours = "<<rate<<endl;
    }
    
};

int main()
{
    
    vector<Employee *> employees;
    employees.push_back(new PermEmployee("Alice", 101, 10000, 5000, 1000));
    employees.push_back(new ContrEmployee("Bob", 102, 0, 50, 350));
    
    for(Employee * i: employees){
        i -> Display();
        i -> calSalary();
    }
    
    for(Employee * i: employees){
        delete i;
    }
    return 0;
}
