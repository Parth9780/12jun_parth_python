// with peramiter and no return type
#include<stdio.h>
void disp(int a, int b)
{
    int c;
    c = a + b;
    printf("%d",c);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    disp(a,b);
    return 0;
}