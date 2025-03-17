#include<iostream>

using namespace std;

//This will not work since we are directly passing const variable address as referance
/*
int fact(int &n){
    if (n <= 1) return 1;
    
    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;
    
    const int r = n;
    
    cout<<fact(r);
} */

//This will work since address for both the &r and n are different and n in the function will be a copy of the value
int fact(int n){
    if (n <= 1) return 1;
    
    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;
    
    const int &r = n;
    
    cout<<fact(r);
}
