#include<iostream>
using namespace std;
int main()
{
	string st;
	cout<<"Enter your name - ";
	cin>>st;
	cout<<"Printing using index method - ";
	for(int i=0;st[i]!='\0';i++)
	cout<<st[i];
	cout<<endl<<"Printing using pointers - ";
	char *p=&st[0];
	for(int i=0;st[i]!='\0';i++)
	{
		cout<<*p;	
		p=&st[i+1];
	}
	return 0;
}
