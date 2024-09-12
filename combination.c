//Program to calculate Combination 
#include<stdio.h>
int fact(int n)
{
	int i, f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,r,f1,f2,f3;
	float C;
	printf("Enter the values of n and r:\n");
	scanf("%d%d",&n,&r);
	f1=fact(n);
	f2=fact(n-r);
    f3=fact(r);
    C=f1/(f2*f3);
	printf("\n Combination, C(%d,%d)=%f",n,r,C);
	return 0;
}