//WAP to Fibonacci series up to given numberss
/*
        0 1 1 2 3 5 8 13...
*/
#include<stdio.h>
int main()
{
    int term;
    int a=0, b=1, c;
    printf("Enter the term :");
    scanf("%d",&term);
    for (int i=1; i <=term; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    printf("%d\n",a);
    
}