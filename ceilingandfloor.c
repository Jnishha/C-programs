//program to implement concept of ceiling and floor function
#include<stdio.h>
#include<math.h>
int main()
{
    float val;
    float fval,cval;
    printf("Enter a float number: ");
    scanf("%f",&val);
    fval=floor(val);
    cval=ceil(val);
    printf("Floor value of %f is %f\n",val,fval);
    printf("Ceiling value of %f is %f\n",val,cval);
    return 0;
}