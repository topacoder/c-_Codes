#include<iostream>
using namespace std;

int area(int l, int b){
	int ans = l*b;
	return ans;
}

int main(){
	int l, b;
	cout<<"Enter Length, Breadth\n";
	cin>>l>>b;

	cout<<"Area of reactangle is = "<<area(l, b)<<"\n";
}
