#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;

	int sum = 0;

	int temp = n;

	while(n > 0){
		int l = n % 10;
		sum = sum * 10 + l;
		n = n/10;
	}

	if(sum == temp) cout<<"Number is palindrome \n";
	else cout<<"Number is not palindrome \n";

	return 0;
}
