//WAP to print factorial of given numbers..
#include<stdio.h>
int main()
{
    int i,n,f;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i = n; i >= 1; i--)
    {
    	f*=i;
        
    }
    printf("%d ",f);
    return 0;
}