#include<iostream>
#include<stdexcept>
#include<vector>
using namespace std;

class Employee{

	public: 
	
	string name;
	int empId;
	string address;
	double salary;
    vector<Employee *> v;

	Employee(): name(""), empId(0), address(""), salary(0.0){}

	void Accept(){
	
		cout<<"Employee name: \n";
		cin>>name;
		cout<<"Employee empId: \n";
		cin>>empId;
		cout<<"Employee address: \n";
		cin>>address;
		cout<<"Employee salary: \n";
		cin>>salary;
	}

	void Display(){
	
		cout<<"\nName: "<<name<<endl;
		cout<<"\nEmployee ID: "<<empId<<endl;
		cout<<"\nAddress: "<<address<<endl;
		cout<<"\nSalary: "<<salary<<endl;

	}

	int getEmpId(){
		return empId;
	}

};


Employee * searchForEmp(vector<Employee *> &emp, int empId){

	for(Employee * i: emp){
		if(i -> getEmpId() == empId) return i;
	}

	return nullptr;	
}


void delFromEmployee(vector<Employee *> &emp, int empId){
	for(auto i=emp.begin(); i!=emp.end(); i++){
		if((*i) -> getEmpId() == empId) {
			delete *i;
			emp.erase(i);

			cout<<"Employee deleted successfully \n";
		}
	}
}

void modify(){
	
}

int main(){
	
	vector<Employee *> v;

	int choice;

	do{
		cout<<"Employee menue \n";
		cout<<"1: Enter new umployee \n";
		cout<<"2: Display all employee \n";
		cout<<"3: Search for employee \n";
		cout<<"4: Delete a employee \n";
		cout<<"5: Modify a employee details\n";
		cout<<"6: Exit.. \n";
		cin>>choice;

		switch(choice){
			case 1: {
				Employee * emp = new Employee;
				emp -> Accept();
				cout<<"New Employee added successfully \n";
				v.push_back(emp);
				break;	
			}
			case 2: {
				
				cout<<"DIsplaying all employees \n";
				for(Employee *i: v){
					i -> Display();
				}
				break;		
			}

			case 3: {

				cout<<"Enter empId you want to search \n";
				int empId;
				cin>>empId;
				
				Employee * emp = searchForEmp(v, empId);
				
				if(emp) emp -> Display();
				else cout<<"Employee Dosen't exists \n";
				break;				
			}

			case 4: {
				cout<<"Enter employee id you want to delete \n";
				int empId;
				cin>>empId;
				

				Employee * emp = searchForEmp(v, empId);
				if(emp){
					
					delFromEmployee(v, empId);
				}
				else cout<<"Employee not found \n";
				break;	
			}

			case 5: {
				cout<<"Enter empId you want to modify \n";
				int empId;
				cin>>empId;

				Employee * emp = searchForEmp(v, empId);

				if(emp) emp -> Accept();
				else cout<<"Employee not found \n\n";
			}
			case 6: {
				cout<<"Exiting...";
				break;		
			}

		}
	}while(choice != 6);

	return 0;
}































































