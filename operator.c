//program to ask operator from user and  perform addition, subtraction, multiplication, division    
#include<stdio.h>
int main()
{
    int num1, num2, choice;
    float result;
    printf("Enter first and second number: ");
    scanf("%d%d", &num1, &num2);
    printf("Enter your choice?\n1. Addition(+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        result = num1 + num2;
        printf("%f", result);
        break;
        case 2:
        result = num1 - num2;
        printf("%f", result);
        break;
        case 3:
        result = num1 * num2;
        printf("%f", result);
        break;
        case 4:
        result = num1 / num2;
        printf("%f", result);
        break;
        default:
        printf("Invalid choice");
        break;
    }
    return 0;
}