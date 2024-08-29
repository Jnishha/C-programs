//program to swap two numbers
#include<stdio.h>
void swap(int, int);
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}
