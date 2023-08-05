// adition of 2x2 matrix

#include<stdio.h>
int main()
{
    int m1[2][2];
    int m2[2][2];
    int sum[2][2];
    int i,j;
    for(i=0; i<2; i++)
    {
       for(j=0; j<2; j++)
       {
            printf("Enter the element: ");
            scanf("%d",&m1[i][j]);
       }
    }
    for(i=0; i<2; i++)
    {
       for(j=0; j<2; j++)
       {
            printf("%d\t",m1[i][j]);
       }
       printf("\n");
    }
    for(i=0; i<2; i++)
    {
       for(j=0; j<2; j++)
       {
            printf("Enter the element: ");
            scanf("%d",&m2[i][j]);
       }
    }
    for(i=0; i<2; i++)
    {
       for(j=0; j<2; j++)
       {
            printf("%d\t",m2[i][j]);
       }
       printf("\n");
    }
    for(i=0; i<2; i++)
    {
       for(j=0; j<2; j++)
       {
            sum[i][j] = m1[i][j] * m2[i][j];
       }
    }
    printf("\n");
    for(i=0; i<2; i++)
    {
       for(j=0; j<2; j++)
       {
            printf("%d\t",sum[i][j]);
       }
       printf("\n");
    }
    return 0;
}
