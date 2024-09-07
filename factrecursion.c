//program to find factorial of number using recursion
#include<stdio.h>
int fact(int n);
int main()
{
    int n,P;
    printf("Enter a number: ");
    scanf("%d",&n);
    P=fact(n);
    printf("Factorial of %d = %d",n,P);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else 
    return(n*fact(n-1));
}