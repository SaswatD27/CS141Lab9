#include<iostream>
#include<cstring>
using namespace std;

void revString(char* ptr)
{
	int len=strlen(ptr);
	char *r=ptr;
	char *p=ptr+len;
	while(*r!='\0')
	{
		*r=*p;
		p--;
		r++;
	}
	while(*ptr!='\0')
	{
		cout<<*ptr;
		ptr++;
	}
}
int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  return 0;
}

