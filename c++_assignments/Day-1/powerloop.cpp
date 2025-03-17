
#include<iostream>
using namespace std;

int main(){

	int n1, n2;
	cout<<"Enter 2 No \n";
	cin>>n1>>n2;

	while(n2 != 0){
		n1 = n1 * n1;
		n2--;
	}

	cout<<n1;

	return 0;
}
