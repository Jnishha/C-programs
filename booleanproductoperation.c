//program to implement product operation between boolean matrix
#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k,sum=0;
    int first[5][5],second[5][5],multiply[5][5];
    printf("Enter the number of rows and columns of first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix:\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    printf("Matrices can't be multiplied.\n");
    else
    {
        printf("Enter the elements of second matrix:\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&second[i][j]);
            }
        }
        printf("The elements of first matrix: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",first[i][j]);
            }
            printf("\n");
        }
        printf("The elements of second matrix: \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",second[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<p;k++)
                {
                    multiply[i][j] = multiply[i][j] || (first[i][k] && second[k][j]);
                }
            }
        }
        printf("Boolean product of the matrices:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",multiply[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}