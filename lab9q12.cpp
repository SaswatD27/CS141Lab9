#include<iostream>
using namespace std;
int main()
{
	int a,b,*p;
	cout<<"Enter an integer value - ";
	cin>>a;
	p=&a;
	b=*p;
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"Value pointed to by p = "<<*p;
	return 0;
}
