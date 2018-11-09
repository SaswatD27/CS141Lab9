#include<iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	char str[20], *p;
	cout << "Input about 10 characters of string\n";
	cin >> str;
	// Pointer variable refers to address of string
	p=str;
	// Show string by shifting top character of string to right
	for(int i=0;str[i]!='\0';i++)
	{
		for(int j=i;str[j]!='\0';j++)
		{	
			p=&str[j];	
			cout<<*p;
		}
		cout<<endl;
	}
	return 0;
}
