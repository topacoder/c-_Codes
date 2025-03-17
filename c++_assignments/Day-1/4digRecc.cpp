#include<iostream>
using namespace std;

int sum(int n){

	if(n <= 9) return n;

	int ans = sum(n%10) + sum(n/10);
	return ans;
}

int main(){
	int n;
	cin>>n;

	cout<<sum(n)<<endl;

	return 0;
}
