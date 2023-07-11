// Logical operator ex.
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of \na: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);

    if(a > b && c < a)
    {
        printf("a is Greater then");
    }
    else if (b > a && c < b)
    {
        printf("b is Greater then");
    }
    else
    {
        printf("c is Greater then");
    }

    return 0;
}