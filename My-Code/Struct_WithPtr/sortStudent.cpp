#include<iostream>
#include<algorithm>
using namespace std;

struct Student{
    char name[10];
    int rollNo;

    void Accept(Student * p){
        cout<<"Enter name: ";
        cin>>p -> name;
        cout<<"Enter roll no: ";
        cin>>p -> rollNo;
    }
    
    void Display(const Student * const p){
        cout<<"Name of student is: "<<p -> name<<endl;
        cout<<"RollNO of student is: "<<p -> rollNo<<endl;
    }
};

bool Sort(const Student &s1, const Student &s2){
    if(s1.rollNo > s2.rollNo) return s1.rollNo;
    return s2.rollNo;
}

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    vector<Student> p(n);

    for(int i=0; i<n; i++){
        p[i].Accept(&p[i]);
    }

    sort(p.begin(), p.end(), Sort);

    cout<<"Displaying the student data :- \n";
    for(int i=0; i<n; i++){
        p[i].Display(&p[i]);
    }



    return 0;
}