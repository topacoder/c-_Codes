#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1; i<=n; i++){
	
		//for space 
		for(int j=n-i; j>0; j--){
		
			cout<<" ";
		}

		//for star
		for(int j=1; j<=i; j++){
		
			cout<<"*";
		}
		cout<<endl;

	}

	return 0;
}
