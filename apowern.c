//program to find the value of a to power n using recursion
#include<stdio.h>
int power(int a,int n);
int main()
{
    int a,n,P;
    printf("Enter the base number: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&n);
    P=power(a,n);
    printf("The value of %d to the power %d is %d",a,n,P);
    return 0;
}
int power(int a,int n)
{
    if(n==0)
    return 1;
    else
    return (a*power(a,n-1));
}