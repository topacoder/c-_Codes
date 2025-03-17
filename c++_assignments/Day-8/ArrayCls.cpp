#include<iostream>

using namespace std;

class Array{
    int size;
    int * p;
    
    public:
    Array(int size){
        
        this->size=size;
        this->p=new int[size];
        
    }
    
    void Display()
    {
        for(int i=0;i<size;i++)
        {
            
            cout<<this->p[i]<<" ";
        }
    }
    
    int& operator[](int idx){
        
        return p[idx];
        
    }
    
    ~Array(){
        delete[] p;
    }
};

int main(){
    
    int n;
    
    cout<<"Enter size of array \n";
    cin>>n;
    
    
    Array tot(n);
    
    for(int i=0; i<n; i++){
        cin>>tot[i];
    }
    
    tot.Display();
}
