//program to find sum of digits of a number
#include<stdio.h>
int main()
{
    int sum=0, n, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (rem != 0)
    {
        rem= n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum of digits  is %d", sum);
    return 0;
}
