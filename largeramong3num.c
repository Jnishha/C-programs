//program to find larger among 3 numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is greater",a);
    else if(b>c && b>a)
    printf("%d is greater",b);
    else
    printf("%d is greater",c);
    return 0;
}