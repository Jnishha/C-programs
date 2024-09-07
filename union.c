//program to implement union operation between two sets
#include<stdio.h>
int main()
{
    int i,j,k,p,n1,n2,set1[10],set2[10],set3[20],flag;
    printf("Enter the number of elements in set1: ");
    scanf("%d",&n1);
    printf("Enter the elements of set1:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&set1[i]);
    }
    printf("Enter the number of elements in set2: ");
    scanf("%d",&n2);
    printf("Enter the elements of set2:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&set2[i]);
    }
    printf("\nThe union of matrix is:\n");
    k=0;
    for(i=0;i<n1;i++)
    {
        set3[k]=set1[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        flag=1;
        for(j=0;j<n1;j++)
        {
            if(set2[i]==set1[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            set3[k]=set2[i];
            k++;
        }
    }
    p=k;
    for(k=0;k<p;k++)
    {
        printf("%d ",set3[k]);
    }
    return 0;
}