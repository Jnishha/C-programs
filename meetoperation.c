//program to implement meet operation between boolean matrix
#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;
    int first[5][5],second[5][5],meet[5][5];
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
            meet[i][j]=first[i][j]&&second[i][j];
        }
    }
    printf("Boolean meet of the matrices:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",meet[i][j]);
        }
        printf("\n");
    }
    return 0;
}