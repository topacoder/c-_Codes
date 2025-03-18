#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    char overAllGrade;

    Student(){
        cout<<"Default ctor called \n";
        rollNo = 0;
        name = " ";
        overAllGrade = ' ';
    }

    Student(const int rollNo, const string name, char overAllGrade): rollNo(rollNo), name(name), overAllGrade(overAllGrade){
        cout<<"Prameterised ctor called \n";
    }

    void Accept(){
        cout<<"Enter roll no of student \n";
        cin>>rollNo;
        cout<<"Enter name of student \n";
        cin>>name;
        cout<<"Enter over all grade of student \n";
        cin>>overAllGrade;
    }

    void Display(){
        cout<<"Roll no of student is: "<<rollNo<<endl;
        cout<<"Name of student is: "<<name<<endl;
        cout<<"Over all grade of student is: "<<overAllGrade<<endl;
        cout<<this;
    }
};

using namespace std;

int main()
{
    // Student *s1 = new Student();
    // s1->Accept();
    // s1->Display();

    int n;
    cout<<"Enter number of students \n";
    cin>>n;

    vector<Student> st(n);

    for(int i=0; i<n; i++){
        st[i].Accept();
    }

    // vector<Student *> st(n);

    cout<<"Printing all the students \n";

    for(int i=0; i<n; i++){
        st[i].Display();
    }

    // for(Student * s : st){
    //     s->Display();
    // }
    return 0;
}