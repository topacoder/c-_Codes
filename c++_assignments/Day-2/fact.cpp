#include<iostream>
using namespace std;

int fact(int n){

	if(n == 1 || n == 0) return 1;
	return n * fact(n-1);
}

int main(){
	int n;
	cin>>n;

	int i = 1;
	while(i <= n){
		cout<<fact(i)<<" ";
		i++;
	}

	return 0;
}
