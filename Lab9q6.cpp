#include<iostream>
using namespace std;
int countEven(int A[],int a)
{
	int cnteven=0,*t=A;
	for(int i;i<a;i++)
	{
		if(*t%2==0)
		cnteven++;
		t++;
	}
	return cnteven;
}
int main()
{
	int A[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter an integer - ";
		cin>>A[i];
	}
	int even=countEven(A,5);
	cout<<"The no. of even no.s = "<<even;
	return 0;
}
