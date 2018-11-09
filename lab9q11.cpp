#include<iostream>
using namespace std;
int main()
{
	int i, *j;
	char c, *d;
	float f, *g;
	double x, *y;
	bool b, *b1;
	long l, *m;
	cout<<"The size of "<<endl<<"Int variable - "<<sizeof(i)<<"\tInt Pointer - "<<sizeof(j)<<endl<<"Char Variable - "<<sizeof(c)<<"\tChar Pointer - "<<sizeof(d)<<endl<<"Float Variable - "<<sizeof(f)<<"\tFloat Pointer - "<<sizeof(g)<<endl<<"Double Variable - "<<sizeof(x)<<"\tDouble Pointer - "<<sizeof(y)<<endl<<"Bool Variable - "<<sizeof(b)<<"\tBool Pointer - "<<sizeof(b1)<<endl<<"Long Variable - "<<sizeof(l)<<"\tLong Pointer - "<<sizeof(m);
	return 0;
}
