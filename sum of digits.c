//program to find sum of digits of a number
#include<stdio.h>
int main()
{
    int sum=0, n, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    rem = n;
    while (rem != 0)
    {
        rem=rem % 10;
        sum = sum + rem;
    }
    printf("The sum of digits  of %d is %d", n, sum);
    return 0;
}