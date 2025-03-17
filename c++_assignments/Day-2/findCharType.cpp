#include<iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

	if(ch >= 'A' && ch <= 'Z') cout<<"Its a capital letter \n";
	else if(ch >= 'a' && ch <= 'z') cout<<"Its a small case letter \n";
	else cout<<"Its not an alphabet \n";
}
