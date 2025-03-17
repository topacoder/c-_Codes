#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter number :";
	cin>>n;
	int first = n % 2 ? n - 1 : n;
	for(int i=n;i>0;i--)
	{		
		for(int j=0;j<i;j++)
                {
                	cout<<" *";
                }	
		for(int j = 1; j <= n-i; j++)
		{
			cout<<"    ";
		}
		for(int j = i; j > 0; j--)
		{
			cout<<" *";
		}
		if(i == 1) continue;
		cout<<endl;	
	}
	for(int i=0;i<=n;i++)
        {
                for(int j=0;j<i;j++)
                {
                        cout<<" *";
                }
                for(int j = 1; j <= n-i; j++)
                {
                        cout<<"    ";
                }
                for(int j = i; j > 0; j--)
                {
                        cout<<" *";
                }

                cout<<endl;
        }


	return 0;
}
