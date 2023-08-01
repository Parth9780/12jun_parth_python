// WAP swap two numbers without using third variable
#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter the value of x :");
    scanf("%d",&x);
    printf("Enter the value of y :");
    scanf("%d",&y);

    printf("\nbefore the swap a value of:\nx: %d\ny: %d",x,y);
    x = x + y;//x = 25 + 30;
    y = x - y;//y = 55 - 25;
    x = x - y;//x = 55 - 30; 
    printf("After the swap a value of:\nx: %d\ny: %d",x,y);
    return 0;
}