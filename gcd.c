//to find gcd of 2 numbers using euclidian algorithm
#include<stdio.h>
int gcd(int, int);
int main()
{
    int a, b,g;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    g=gcd(a,b);
    printf("gcd of %d and %d is %d.", a, b, g);
    getch();
    return 0;
}
int gcd (int a, int b)
{
    if (a == 0)
    return b;
    else
    return gcd(b%a, a);
}
