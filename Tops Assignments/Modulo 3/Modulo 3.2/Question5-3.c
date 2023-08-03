//WAP to print table up to given numbers
#include<stdio.h>
int main()
{
    int t,i,ans=0;
    printf("Enter the number: ");
    scanf("%d",&t);
    for(t=1; t<=10; t++)
    {
        ans = t * i;
        printf("%d * %d = %d",t,i,ans);
    }
    return 0;
}