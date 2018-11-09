#include<iostream>
#include<cstring>
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
	for(int i=0,j=strlen(B);i+j<(strlen(A)+strlen(B));i++)
	{
		B[j+i]=A[i];
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
	int i;
	int sum=0;
	for(i=0;A[i]!='\0'&&B[i]!='\0';i++)
	{
		sum+=A[i]-B[i];
	}
	return sum;
}
int strchr1(char A[], char b)
{
	int occ;	
	for(int i=0;A[i]!='\0';i++)
	{
		if(A[i]==b)
		{
			occ=i+1;
			break;
		}
	}
	return occ;
}
char *strstr1(char A[],char B[])
{
	char *str;
	int n,i,j;
	for(i=0;A[i]!=NULL;i++)
	{
		while(B[i]!=A[i])
		{
			i++;
			continue;
		}
		for(j=0, n=0;B[j]!=NULL&&A[i+j]!=NULL&&B[j]==A[i+j];j++)
		{
			n++;
		}
		if(n==strlen(B))
		break;
		else continue;
	}
	if(n==strlen(B))
	return &A[i];
	else return NULL;
}
			
