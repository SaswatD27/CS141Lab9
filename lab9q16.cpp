#include<iostream>
#include<stdio.h>
using namespace std;
int main(void)
{
	char str[20], *p;
	cout << "Input about 10 characters of string\n";
	cin >> str;
	// Pointer variable refers to address of the last element of the string
	int n;
	for(n=0;str[n]!='\0';n++);	
	p=&str[n-1];
	// Show string by shifting the pointer right with each iteration
	for(int i=0;i<n;i++)
	{
		for(int j=n-i-1;j<n;j++)
		{		
			p=&str[j];
			cout<<*p;
		}
		cout<<endl;
	}
	return (0);
}
