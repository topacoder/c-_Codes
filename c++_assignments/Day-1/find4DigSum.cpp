#include<iostream>
using namespace std;

int main(){
	int n;

	cout<<"Enter a 4 dig number";
	cin>>n;
	int sum = 0;

	while(n > 0){
		int lastDig = n % 10;
		sum += lastDig;
		n = n/10;	
	}
	cout<<sum<<endl;

	return 0;
}
