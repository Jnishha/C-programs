//program to let user guess your age
#include<stdio.h>
int main()
{
    int age = 20;
    int guessage;
    printf("Guess what is my age?\n");
    scanf("%d", &guessage);
    if(guessage==age)
    printf("Congratulations!! Your guess is right. I am %d years old. :)",age);
    else if(guessage>age)
    printf("Opps!! Your guess is a bit higher than me. I am actually %d years old. :(\n",age);
    else
    printf("Opps!! Your guess is a bit lower than me. I am actually %d years  old. :(",age);
    return 0;
} 
