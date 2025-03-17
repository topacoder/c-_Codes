#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float ci(int &p, int &n, int &r){

	return p * (pow((1 + r/100), n));
}

int main(){
	int p;
	cout<<"Enter Principal amt \n";
	cin>>p;

	int t;
	cout<<"Enter time for which money is kept \n";
	cin>>t;

	int r;
	cout<<"Enter rate of interest \n";
	cin>>r;

	int sum = ci(p, t, r);
	cout<<sum<<endl;

	return 0;
}
