
#include <iostream>
using namespace std;

template <class T>
void Swap( T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    
}

template <class T>
T add(T a, T b)
{
    return a+b;
    
}


template <class T>
T sub(T a, T b)
{
    return a-b;
}


template <class T>
T mul(T a, T b)
{
    return a*b;
    
}

template <class T>
T divi(T a, T b)
{
    if(b==0) return -1;
    return a/b;
}

int main()
{
   int a,b;
   
   cin>>a>>b;
   cout<<" Before swapping :"<<a<<" "<<b<<endl;
   
   Swap(a,b);
   
   cout<<" After swapping :"<<a<<" "<<b<<endl;
   
   cout<<add(a,b)<<endl;
   cout<<sub(a,b)<<endl;
   cout<<mul(a,b)<<endl;
   cout<<divi(a,b)<<endl;
   
    
   return 0;
   
   
}
