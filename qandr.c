//program to find quotient and remainder
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,quotient,remainder;
    printf("Enter the dividend: ");
    scanf("%d",&num1);
    printf("Enter the divisor: ");
    scanf("%d",&num2);
    if(num2==0)
    {
        printf("Division by zero is not allowed.");
    }
    else
        {
            quotient=num1/num2;
            remainder=num1%num2;
            printf("Quotient: %d\n",quotient);
            printf("Remainder: %d",remainder);
        }
        return 0;
}