//include library
#include<iostream>
using namespace std;
int main()
{
	//declare one variable and one pointer each of int, char, float, double, bool and long types
	int i, *j;
	char c, *d;
	float f, *g;
	double x, *y;
	bool b, *b1;
	long l, *m;
	//display their sizes
	cout<<"The size of "<<endl<<"Int variable - "<<sizeof(i)<<"\tInt Pointer - "<<sizeof(j)<<endl<<"Char Variable - "<<sizeof(c)<<"\tChar Pointer - "<<sizeof(d)<<endl<<"Float Variable - "<<sizeof(f)<<"\tFloat Pointer - "<<sizeof(g)<<endl<<"Double Variable - "<<sizeof(x)<<"\tDouble Pointer - "<<sizeof(y)<<endl<<"Bool Variable - "<<sizeof(b)<<"\tBool Pointer - "<<sizeof(b1)<<endl<<"Long Variable - "<<sizeof(l)<<"\tLong Pointer - "<<sizeof(m);
	return 0;
}
