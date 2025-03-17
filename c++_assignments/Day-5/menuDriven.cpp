#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){

	for(int i=0; i<n; i++){
	
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}

	cout<<"Displaying the sorted array \n";

	for(int i=0; i<n; i++){
	
		cout<<arr[i]<<" ";
	}
}

void displayString(char *arr, int n){

	for(int i=0; i<n; i++){
	
		cout<<arr[i];
	}

	cout<<endl;
}

void multiplyByTwo(int *arr, int n){

	for(int i=0; i<n; i++){
	
		cout<<arr[i] * 2<<" ";
	}
	cout<<endl;
}

void calAvg(int *arr, int n){

	int sum = 0;

	for(int i=0; i<n; i++){
	
		sum += arr[i];
	}

	cout<<"Average of all the elements of the array is = "<<sum/n<<"\n";
}

int main(){

	int n, choice;

	do{
	
		cout<<"\nMenue";
		cout<<"\n1. Accept numbers, sort and display the array";
		cout<<"\n2. Accept char and display as a string";
		cout<<"\n3. Accept number multiply by 2 and display";
		cout<<"\n4. Accept numbers find and display the average";
		cout<<"\n5. Exit";

		cout<<"\n Enter your choice ";
		cin>>choice;

		switch(choice){
		
			case 1: {
					cout<<"Enter the number of elements \n";
					cin>>n;
					int *arr = new int[n];

					for(int i=0; i<n; i++){
						cin>>arr[i];
					}

					sort(arr, n);

					delete[] arr;
					break;
			}

			case 2: {
				
					cout<<"Enter the number of char \n";
					cin>>n;

					char *arr = new char[n];

					for(int i=0; i<n; i++){
					
						cin>>arr[i];
					}

					arr[n] = '\0';
					displayString(arr, n);

					delete[] arr;
					break;
			}

			case 3: {
				
					cout<<"Enter number of elements \n";
					cin>>n;

					int *arr = new int[n];

					cout<<"Enter elements \n";
					for(int i=0; i<n; i++){
					
						cin>>arr[i];
					}
					
					multiplyByTwo(arr, n);
					delete[] arr;
					break;

			}

			case 4: {
				
					cout<<"Enter number of elements \n";
					cin>>n;

					int *arr = new int[n];

					cout<<"Enter elements \n";

					for(int i=0; i<n; i++){
					
						cin>>arr[i];
					}
					
					calAvg(arr, n);
					delete[] arr;
					break;

			}

			case 5: {
				
					cout<<"Exiting prog... \n";
					break;
			}

			default: 
				cout<<"Invalid choice.. pls try again\n";


		}
	}while(choice != 5);

	return 0;
}
