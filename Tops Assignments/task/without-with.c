//with-out peramiter and return type.
#include<stdio.h>
int show();
int main()
{
    int a;
    a=show();
    printf("%d",a);
    return 0;
}
int show()
{
    int a,b;
    printf("Enter the tow no: ");
    scanf("%d%d",&a,&b);
    return a+b;
}