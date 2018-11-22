#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(void)
{
	char str[20], *p;
	cout << "Input about 10 characters of string\n";
	cin >> str;
	// Pointer variable refers to address of the last element of the string
	p=str;
	p=p+strlen(str);
	char *f=&str[0];
	// Show string by shifting top character of string to left
	char *q;
	do
	{
		p--;
		q=p;
		while(*q!='\0')
		{	
			cout<<*q;
			q++;
		}
		cout<<endl;
	}while(p!=f-1);
	return 0;
}

