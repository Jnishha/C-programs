//Program to calculate Permutation 
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
	int n,r,f1,f2;
	float P;
	printf("Enter the values of n and r");
	scanf("%d%d",&n,&r);
	f1=fact(n);
	f2=fact(n-r);
	P=f1/f2;
	printf("\n Permutation, P(%d,%d)=%f",n,r,P);
	return 0;
}
