#include<iostream>
using namespace std;

int areaRect(int l, int b){
	return l * b;
}

int areaSqe(int a){
	return a * a;
}

float areaCir(int r){
	float pi = 3.14;

	return pi * (r * r);
}

int main(){
	int l, b, a, r;

	cout<<"Enter length, breadth of the rect\n, enter side of square\n, enter radius of circle \n";

	cin>>l>>b>>a>>r;

	cout<<"Area of rectangel is = "<<areaRect(l, b)<<endl;
	cout<<"Area of a square is = "<<areaSqe(a)<<endl;
	cout<<"Area of a circle is = "<<areaCir(r)<<endl;
	
	return 0;
}
