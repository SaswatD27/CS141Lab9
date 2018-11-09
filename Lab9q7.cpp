#include<iostream>
using namespace std;
double *maximum(double* a,int size)
{
	if(size==0)
	return NULL;
	double *max=a;
	for(int i=0;i<size;i++)
	{
		if(*a>*max)
		max=a;
		a++;
	}
	return max;
}
int main()
{
	double A[10];
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter a double value - ";
		cin>>A[i];
	}
	cout<<"The maximum value entered = "<<*maximum(A,size);
	return 0;
}
