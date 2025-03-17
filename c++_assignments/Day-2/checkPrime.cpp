#include<iostream>
using namespace std;

bool checkPrime(int n){
	if(n == 1) return false;

	//check divisibility
	for(int i=2; i<n; i++){
		if(n % i == 0) return false; 
	}
	return true;
}

int main(){
	int n = 10;

	for(int i=1; i<=10; i++){
		if(checkPrime(i)) cout<<i<<" ";
	}

	return 0;
}
