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
	char *q;
	while(*p!='\0')
	{
		q=p;
		while(*q!='\0')
		{
			cout<<*q;
			q++;
		}
		cout<<endl;
		p++;
	}
	return 0;
}
