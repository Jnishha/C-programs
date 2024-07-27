#include<stdio.h>
int main()
{
	int c=1;
	do
	{
		printf("5*%d=%d\t",c,c*5);
		c=c+1;
	}while(c<=10);
	return 0;
}