//program to find reverse of a number
#include<stdio.h>
int main()
{
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("The reverse of %d is %d",n,rev);
    return 0;
}