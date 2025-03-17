#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){

	int orin = n;
	int sum = 0;
	int d = 0;

	int temp = n;

	while(temp > 0){
	
		d++;
		temp /= 10;
	}

	temp = n;
	while(temp > 0){
	
		int ld = temp % 10;
		sum += pow(ld, d);
		temp /= 10;
	}

	return sum == orin;
}

int main(){

	int n;
	cin>>n;

	if(isArmstrong(n)) cout<<"It's a armstrong \n";
	else cout<<"not armstrong \n";

	return 0;
}
