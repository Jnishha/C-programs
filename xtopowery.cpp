#include<stdio.h>
int main()
{
	int x=3,y=5,z,a;
	do
	{
		z=x;
		x=z*x;
		a++;
	}while(a<=y);
	return 0;
}
