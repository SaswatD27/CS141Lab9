#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[10] = "abcde";
	char* cptr;
	int i;
	cptr=&s[strlen(s)-1];
	for(int j=strlen(s)-1;j>=0;j--,cptr--)
	{
		cout<<*cptr;
	}
	return 0;
}
