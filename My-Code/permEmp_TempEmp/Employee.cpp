#include<iostream>
using namespace std;

class Employee{
    public:

    string name;
    int empId;
    double salary;
    string dept;

    Employee(){
        name = "";
        empId = 0;
        salary = 0.0;
        dept = "";
    }

    Employee(string name, int empId, double salary, string dept): name(name), empId(empId), salary(salary), dept(dept) {}

    void Accept(){
        cout<<"Enter Employee name: ";
        cin>>name;

        cout<<"Enter employee Id: ";
        cin>>empId;

        cout<<"Enter employee department: ";
        cin>>dept;
    }

    virtual void calSalary() = 0; //pure virtual funciton;

    virtual void Display(){
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee id: "<<empId<<endl;
        cout<<"Employee salary: "<<salary<<endl;
        cout<<"Employee department: "<<dept<<endl;
    }
};

class PermEmployee: public Employee{
    public: 

    float baseSalary;
    int hra;
    int da;

    PermEmployee(){
        hra = 0;
        da = 0;
    }

    PermEmployee(string name, int id, double salary, string dept, float baseSalary, int hra, int da): Employee(name, id, salary, dept), baseSalary(baseSalary), hra(hra), da(da) {}

    void Accept(){
        Employee::Accept();
        cout<<"Enter base salary \n";
        cin>>baseSalary;
        cout<<"Enter HRA: ";
        cin>>hra;
        cout<<"Enter DA: ";
        cin>>da;
    }

    void calSalary(){
        double totalSalary = baseSalary + hra + da;
        cout<<"Total salary: "<<totalSalary<<endl;
    }

    void Display(){
        Employee::Display();
        cout<<"HRA: "<<hra<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"Totle salary: \n";
        calSalary();
    }
};

class TempEmployee: public Employee{
    public:
    int hrsWorked;
    double rate;

    TempEmployee(){
        hrsWorked = 0;
        rate = 0;
    }

    TempEmployee(string name, int id, double salary, string dept, int hrsWorked, double rate): Employee(name, id, salary, dept), hrsWorked(hrsWorked), rate(rate){}

    void Accept(){
        Employee::Accept();
        cout<<"Enter hours worked: ";
        cin>>hrsWorked;

        cout<<"Enter rate per hour: ";
        cin>>rate;
    }

    void calSalary(){
        double totalSalary = hrsWorked * rate;
        cout<<"Total salary: "<<totalSalary<<endl;
    }

    void Display(){
        Employee::Display();
        cout<<"Hours worked: "<<hrsWorked<<endl;
        cout<<"Rate per hour: "<<rate<<endl;
        cout<<"Total salary: \n";
        calSalary();
    }
};

vector<PermEmployee *> permEmp;
vector<TempEmployee *> tempEmp;

void addEmployee(){
    
    cout<<"Enter type of employee, (permanant or temporary): ";
    string type;
    cin>>type;

    if(type == "Permanant" || type == "permanent"){
        
        PermEmployee *emp = new PermEmployee();
        emp->Accept();
        permEmp.push_back(emp);
        cout<<"Permnant Employee added successfully"<<endl;
    }
    else if(type == "temporary" || type == "Temporary"){
        TempEmployee *emp = new TempEmployee();
        emp->Accept();
        tempEmp.push_back(emp);
        cout<<"Temporary Employee added successfully"<<endl;
    }
    else{
        cout<<"Invalid type"<<endl;
    }
}

int main()
{
    int choice;
    do{
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display permnant Employee"<<endl;
        cout<<"3. Display temporary Employee"<<endl;
        cout<<"4. Display all Employee"<<endl;
        cout<<"5. Exit"<<endl;

        cin>>choice;

        switch(choice){
            case 1: {
                addEmployee();
                break;
            }
            case 2: {
                cout<<"Displaying permnant employees \n";
                for(PermEmployee * i: permEmp){
                    i->Display();
                }
                break;
            }
            case 3: {
                cout<<"Displaying temporary employees \n";
                for(TempEmployee * i: tempEmp){
                    i->Display();
                }
                break;
            }
            case 4: {
                cout<<"Displaying all employees \n";
                cout<<"Permanant Employees \n";
                for(PermEmployee * i: permEmp){
                    i->Display();
                }
                cout<<"Temporary Employees \n";
                for(TempEmployee * i: tempEmp){
                    i->Display();
                }
                break;
            }
            case 5: {
                cout<<"Exiting.. \n";
                break;
            }
        }

    }while(choice != 5);
    return 0;
}