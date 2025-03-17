
#include<iostream>
using namespace std;

void swap(int &a, int &b){

	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 10, b = 20;
	
	cout<<"a = "<<a<<" and b = "<<b<<endl;

	swap(a, b);


	cout<<"a = "<<a<<" and b = "<<b<<endl;

	return 0;
}
