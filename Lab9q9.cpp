//include libraries
#include<iostream>
#include<cstring>
using namespace std;
//write a bool function contains with char A[] and char b as parameters
bool contains(char A[], char b)
{
	//declare a char pointer a and point it at the first element of A
	char *a=A;
	//declare a bool vaiable chk and initialise it as 0
	bool chk=0;
	//run a for loop, incrementing a with each turn by 1 and terminate the loop when a points to a value '\0'
	for(;*a!='\0';a++)
	{
		//if b is found within the array, assign chk a value of 1
		if(*a==b)
		{
			chk=1;
			break;
		}
	}
	//return the value of chk
	return chk;
}
//write the main function
int main()
{
	//declare a char A[] and char variable B and ask for their input
	char A[50],b;
	cout<<"Enter the value of a char array - ";
	cin>>A;
	cout<<"Enter the value to be searched for - ";
	cin>>b;
	//call contains() with A and b as parameters and if 1 is returned, display True, else display False
	if(contains(A,b)==1)
	cout<<"True";
	else cout<<"False";
	return 0;
}
