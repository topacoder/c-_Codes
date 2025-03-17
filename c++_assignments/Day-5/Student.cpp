#include<iostream>
using namespace std;

struct Student {
	char name[10];
	int roll;
};

void Accept(Student* const ptr)
{
	cout<<"Enter Student Name : ";
	cin>>ptr -> name;

	cout<<"Enter Student Roll number : ";
	cin>>ptr -> roll;
}

void Display(const Student* const ptr)
{
	cout<<"\nName of Student is "<<ptr -> name;
	cout<<"\nRoll number of Student is "<<ptr -> roll<<endl;
}

int main()
{
	int no;
	cout<<"\nEnter the number of Students : ";
	cin>>no;

	Student std[no];

	for(int i = 0; i < no; i++)
	{
		Student* ptr = &std[i];
		cout<<"\nEnter details of Student "<<i + 1<<endl;
		Accept(ptr);
	}
	cout<<"\n\n**************************************\n\n";
	cout<<"Details of students are"<<endl; 
	for(int i = 0; i < no; i++)
	{
		cout<<"\nStudent "<<i + 1<<" :";
		Student* ptr = &std[i];
		Display(ptr);
	}
	return 0;
}
