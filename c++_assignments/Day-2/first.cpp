#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void eqnRoots(float a, float b, float c){
	float d = b * b - 4 * a * c;

	float r1, r2;

	if(d > 0){
		r1 = -b + sqrt(d)/(2 * a);
		r2 = -b - sqrt(d)/(2 * a);

		cout<<"The real Roots are "<<r1<<" "<<r2;
	}
	else if(d == 0){
		r1 = -b/(2 * a);
		r2 = -b/(2 * a);

		cout<<"The Roots are same "<<r1<<" "<<r2;
	}
	else{
		cout<<"The Roots are imaginery \n";
	}

}

int main(){
	float a, b, c;
	cout<<"Enter 3 numbers \n";
	cin>>a>>b>>c;
	
	eqnRoots(a, b, c);

	return 0;

}
