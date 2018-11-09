//include library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare an int array A[] of size 10, and int pointer p and an int counter variable i and ask for the input of A
	int A[10], *p, i;
	cout<<"Enter 10 integers "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Integer no. "<<i+1<<" - ";
		cin>>A[i];
	}
	//print values of A using the index method (using a counter variable to traverse through the indices using a for loop)
	cout<<endl<<"Printing using the index method "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<A[i]<<" ";
	}
	//print values of A using the pointer method, i.e. run a no. of iterations equal to the size of A and initially point the pointer p at the first element of A and print the value pointed to by p with each iteration and increment p by 1 for each iteration
	cout<<endl<<"Printing using the pointer method "<<endl;
	for(i=0,p=A;i<10;i++)
	{
		cout<<*p<<" ";
		p++;
	}
	return 0;
}		
