#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
	
	for(int i=0; i<n; i++){
	
		for(int j=i+1; j<n; j++){
		
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}

}

int main(){

	int n;
	cout<<"Enter size of array \n";
	cin>>n;
	
	int arr[n];

	cout<<"Enter array elements \n";

	for(int i=0; i<n; i++){
	
		cin>>arr[i];
	}

	sort(arr, n);

	cout<<"Sorted array is \n";

	for(int i=0; i<n; i++){
	
		cout<<arr[i]<<" ";
	}
}
