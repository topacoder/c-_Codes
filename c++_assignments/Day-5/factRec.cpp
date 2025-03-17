#include<iostream>
using namespace std;

int fact(int n){

	if(n == 1) return n;
	return n * fact(n-1);
}

int main(){

	int n;
	cin>>n;

	while(n > 0){
	
		cout<<fact(n)<<" ";
		n = n-1;
	}

	return 0;
}
