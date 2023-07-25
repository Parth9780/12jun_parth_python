// swap the value using three variable

#include<stdio.h>
void main(){
    int a,b,temp=0;
    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
                // a = 20; b = 10;
    temp = a;   // temp = 20;
    a = b;      // a = 10;
    b = temp;   // b = 20;

    printf("A is :%d",a);
    printf("\nB is :%d",b);
}