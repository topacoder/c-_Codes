#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min(int arr[], int n){

	int min = INT_MAX;

	for(int i=0; i<n; i++){
	
		if(arr[i] < min) min = arr[i];
	}

	return min;
}

int max(int arr[], int n){

	int max = INT_MIN;

	for(int i=0; i<n; i++){
	
		if(arr[i] > max) max = arr[i];
	}

	return max;
}

int secMin(int arr[], int n){

	int min = INT_MAX;
	int secMin = INT_MAX;

	for(int i=0; i<n; i++){
	
		if(arr[i] < min){
		
			min = arr[i];
		}
		
		if(arr[i] < secMin && arr[i] > min){
		
			secMin = arr[i];
		}
	}

	return secMin;

}

int secMax(int arr[], int n){

	int max = INT_MIN;
	int secMax = INT_MIN;

	for(int i=0; i<n; i++){
	
		if(arr[i] > max){
		
			max = arr[i];
		}

		if(arr[i] > secMax && arr[i] < max){
			secMax = arr[i];
		}
	}

	return secMax;
}

int main(){

	int n;
	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	cout<<"min = "<<min(arr, n)<<endl;
	cout<<"max = "<<max(arr, n)<<endl;
	cout<<"secMax = "<<secMax(arr, n)<<endl;
	cout<<"secMin = "<<secMin(arr, n)<<endl;

	return 0;
	
}
