#include<iostream>
#include<cstring>
using namespace std;
bool contains(char A[], char b)
{
	char res[10], *a=A;
	bool chk=0;
	for(;*a!='\0';a++)
	{
		if(*a==b)
		{
			chk=1;
			break;
		}
	}
	return chk;
}
int main()
{
	char A[50],b;
	cout<<"Enter the value of a char array - ";
	cin>>A;
	cout<<"Enter the value to be searched for - ";
	cin>>b;
	if(contains(A,b)==1)
	cout<<"True";
	else cout<<"False";
	return 0;
}
