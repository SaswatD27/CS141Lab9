//include library
#include<iostream>
using namespace std;
int main()
{
	//declare int variables a and b and the int pointer p
	int a,b,*p;
	//ask for input of a
	cout<<"Enter an integer value - ";
	//follow assignment instructions given in the question
	cin>>a;
	p=&a;
	b=*p;
	//display the values
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"Value pointed to by p = "<<*p;
	return 0;
}
