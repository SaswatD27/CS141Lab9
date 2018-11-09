#include<iostream>
using namespace std;
int main()
{
	int A[10], *p, i;
	cout<<"Enter 10 integers "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Integer no. "<<i+1<<" - ";
		cin>>A[i];
	}
	cout<<endl<<"Printing using the index method "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl<<"Printing using the pointer method "<<endl;
	for(i=0,p=A;i<10;i++)
	{
		cout<<*p<<" ";
		p=&A[i+1];
	}
	return 0;
}		
