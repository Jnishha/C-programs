//program to implement compliment operation of a set
#include <stdio.h>
int main()
{
    int i,j,k,p,n1,n2,setU[20],setA[10],setC[20],flag;
    printf("Enter the number of elements in Universal Set: ");
    scanf("%d",&n1);
    printf("Enter the elements of Universal Set:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&setU[i]);
    }
    printf("Enter the number of elements in setA: ");
    scanf("%d",&n2);
    printf("Enter the elements of setA:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&setA[i]);
    }
    printf("\nThe compliment of matrix is:\n");
    k=0;
    for(i=0;i<n1;i++)
    {
        flag=0;
        for(j=0;j<n2;j++)
        {
            if(setU[i]==setA[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            setC[k]=setU[i];
            k++;
        }
    }
    p=k;
    for(k=0;k<p;k++)
    {
	    printf("%d ",setC[k]);
    }
    return 0;
}
