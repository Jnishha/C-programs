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
