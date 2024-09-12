//Program to calculate permutation with repeatation 
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
	int i,n,r,f[20],a[i],o,q=1;
	float  P;
	printf("Enter the values of n:\n");
	scanf("%d",&n);
	o=fact(n);
    printf("Enter number of times r is repeated in n:\n");
    scanf("%d",&r);
    printf("Enter the repeated numbers:\n");
    for(i=1;i<=r;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=r;i++)
    {
        f[i]=fact(a[i]);
        q=q*f[i];
    }
    P=o/q;
	printf("\n Permutation with repeatition, P(%d,%d)=%f",n,r,P);
	return 0;
}
