#include<iostream>
using namespace std;

class Array{
    int *ptr;
    int size;

    //first creating the constructor
    public: 
    Array(int size){
        cout<<"Constructor called \n";
        this -> size = size;
        ptr = new int[this -> size];
    }

    //deep cpy constructor
    Array(const Array &cpy){
        cout<<"Copy constructor called \n";
    }


    // int getEle(int index){
    //     return ptr[index];
    // }

    // void setEle(int index, int value){
    //     this -> ptr[index] = value;
    // }

    //operator overloading using []
    int& operator[](int index){
        return ptr[index];
    }

    void display(){
        cout<<"\nDisplaying the array content \n";

        //looping
        for(int i=0; i<size; i++){
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }


    ~Array(){
        cout<<"\nDestrouctor called for \n"<<this -> ptr;
        delete[] ptr;
    }
};

int main()
{

    int n;
    cout<<"Enter size of the array \n";
    cin>>n;

    Array a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Displaying a \n";
    a.display();




/*
    deep copy ==> The original ctor and the copied ctor will have different memory locations hence safe
    shallow copy ==> The original and the copied will have the same memory location hence dangerous
*/




    //creating a shallow copy constructor
    Array b(a);
    cout<<"Displaying b \n";
    b.display();cout<<"\n";;
    return 0;
}
