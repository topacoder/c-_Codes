#include<iostream>
using namespace std;

int fun(int n){
	if(n == 0) return 0;
	
	else{
		return n % 2 + 10 * fun(n/2);
	}
}

int main(){

	int n;
	cin>>n;

	cout<<fun(n);

	return 0;
}
