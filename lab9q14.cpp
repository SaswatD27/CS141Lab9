//include library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	// declare a string st and ask user to input a name to be stored in st
	string st;
	cout<<"Enter your name - ";
	cin>>st;
	//Print st using the good ol' index method i.e. using a counter variable and a for loop, run the loop a no. of times equal to the size of the string and print the value of string by accessing its elements using their indices 
	cout<<"Printing using index method - ";
	for(int i=0;st[i]!='\0';i++)
	cout<<st[i];
	//print st using the pointer method i.e. declare a char pointer p and point it to the first element of st and run a no. of iterations equal to the size of the string and print the value pointed to by p and increment p with each iteration
	cout<<endl<<"Printing using pointers - ";
	char *p=&st[0];
	for(int i=0;st[i]!='\0';i++)
	{
		cout<<*p;	
		p++;
	}
	return 0;
}
