//include libraries
#include<iostream>
#include<cstring>
using namespace std;
//write the driver function
int main()
{
	char s[10] = "abcde";
	char* cptr;
	//point cptr at the last element of s
	cptr=&s[strlen(s)-1];
	//for strlen(s)-1 times, run a for loop printing the value pointed to by cptr, decrementing cptr by 1 with each iteration
	for(int j=strlen(s)-1;j>=0;j--,cptr--)
	{
		cout<<*cptr;
	}
	return 0;
}
