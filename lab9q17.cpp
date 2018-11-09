#include<iostream>
using namespace std;
void *strcpy1(char A[],char B[])
{
	int n=strlen(B);
	for(int i=0;i<n;i++)
	{
		A[i]=B[i];
	}
}
char *strcat1(char A[], char B[])
{
	for(int i=0,j=strlen(B);i<n;i++)
	{
		int B[j+i]=A[i];
	}
	return B;
}
int strlen1(char A[])
{
	int i;
	for(i=0;A[i]!='\0';i++);
	return i;
}
int strcmp1(char A[],char B[])
{
	
