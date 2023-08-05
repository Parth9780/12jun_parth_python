// adition of 2x2 matrix

#include<stdio.h>
int main()
{
    int m1[2][2];
    int m2[2][2];
    int ans[2][2];
    for(int i; i<2; i++)
    {
       for(int j; j<2; j++)
       {
            printf("Enter the element: ");
            scanf("%d",&m1[i][j]);
       }
    }
    for(int i; i<2; i++)
    {
       for(int j; j<2; j++)
       {
            printf("%d ",m1[i][j]);
       }
    }
    for(int i; i<2; i++)
    {
       for(int j; j<2; j++)
       {
            printf("Enter the element: ");
            scanf("%d",&m2[i][j]);
       }
    }
    for(int i; i<2; i++)
    {
       for(int j; j<2; j++)
       {
            ans[i][j] = m1[i][j] * m2[i][j];
       }
    }
    for(int i; i<2; i++)
    {
       for(int j; j<2; j++)
       {
            printf("%d ",ans[i][j]);
       }
    }
    return 0;
}