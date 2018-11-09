#include<iostream>
using namespace std;
int myStrLen(char A[])
{
	int len=0;
	char *a=A;
	for(int i=0;*a!='\0';i++,a++)
	{
		len++;
	}
	return len;
}
int main()
{
	char A[30];
	cout<<"Enter the value of a char array - ";
	cin>>A;
	cout<<"Size of array - "<<myStrLen(A)<<" characters ";
	return 0;
}
