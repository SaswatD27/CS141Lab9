#include<iostream>
using namespace std;
int countEven(int A[],int a)
{
	//declare a counter variable cnteven (init value = 0) to store the no. of even no.s found in the array and an int poiunter t which initially points at the first element of A
	int cnteven=0,*t=A;
	//intialise a counter variable i in a for loop and while i is less than the size of the array search for even no. entries in the array
	for(int i=0;i<a;i++)
	{
		//if an even no. is found, increment cnteven by 1
		if(*t%2==0)
		cnteven++;
		t++;
	}
	//return cnteven
	return cnteven;
}
int main()
{
	//declare an int array A of size 5 and ask for its input
	int A[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter an integer - ";
		cin>>A[i];
	}
	//call countEven() with A and 5 as its parameters and display the result
	int even=countEven(A,5);
	cout<<"The no. of even no.s = "<<even;
	return 0;
}
