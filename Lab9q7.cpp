#include<iostream>
using namespace std;
double *maximum(double* a,int size)
{
	//if the size of the array is zero then return NULL
	if(size==0)
	return NULL;
	//otherwise proceed
	//declare a double pointer and point it to the variable pointed to by a
	double *max=a;
	for(int i=0;i<size;i++)
	{
		//using a for loop run a no. of iterations equal to the size of the array and increment a with every iteration and if the value pointed to by a is greater than that pointed to by max,reassign max to point at that position of a
		if(*a>*max)
		max=a;
		a++;
	}
	//return max
	return max;
}
int main()
{
	//declare a double array of size 10, and ask for the size of the array and input of its elements
	double A[10];
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter a double value - ";
		cin>>A[i];
	}
	//call maximum() using A and size of the array as parameters and display the result
	cout<<"The maximum value entered = "<<*maximum(A,size);
	return 0;
}
