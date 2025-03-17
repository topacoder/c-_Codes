#include<iostream>
using namespace std;

template <class T>

class Array{
    int size;
    T * arr;
    
    public:
    Array(int size){
        this -> size = size;
        arr = new T[size];
    }
    
    void setValue(){
        cout<<"Enter "<<size<<" elements of type "<< typeid(T).name()<<": ";
        
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
    }
    
    void Display(){
        cout<<"Array Elements: \n";
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    
    Array<int> intArr(3);
    intArr.setValue();
    intArr.Display();
    
    Array<float> floatArr(3);
    floatArr.setValue();
    floatArr.Display();
    
    Array<char> charArr(3);
    charArr.setValue();
    charArr.Display();
}
