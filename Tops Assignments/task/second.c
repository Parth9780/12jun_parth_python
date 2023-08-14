#include<stdio.h>
int show();
int main()
{
    int a,b,c;
    printf("Enter the tow no: ");
    scanf("%d%d",&a,&b);
    c = a + b;
    show();
}
int show()
{
    int a=20,b=30,c=0;
    c=a+b;
    return c;
}