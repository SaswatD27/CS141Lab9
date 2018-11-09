//include the library
#include<iostream>
using namespace std;
//write the int function myStrLen ith the given parameters i.e. a char array A[]
int myStrLen(char A[])
{
	//declare an int variable len to hold the size of A and a char pointer a and point it at the first element of A
	int len=0;
	char *a=A;
	//run a for loop and increment a by 1 with each iteration and as long as a is not equal to '\0' keep incrementing len with each iteration
	for(int i=0;*a!='\0';i++,a++)
	{
		len++;
	}
	//return len
	return len;
}
int main()
{
	//declare a char array and ask for its input
	char A[30];
	cout<<"Enter the value of a char array - ";
	cin>>A;
	//call myStrLen() using the declared char array as a parameter and display the result
	cout<<"Size of array - "<<myStrLen(A)<<" characters ";
	return 0;
}
