/*
		circle = pi*r*r;
		rectangle = l*w;
		triangle = hb*b/2;
*/
#include<stdio.h>
int main()
{
    static float pi = 3.17;
    int r,l,w,hb,b;
    float area = 0;
    int ch;
    printf("Enter your choice-\n1. circle\n2. rectangle\n3. triangle : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter the radius of circle : ");
        scanf("%d",&r);
        area = pi * r * r;
        printf("%f",area);
        break;
    case 2:
        printf("Enter the length of rectangle : ");
        scanf("%d",&l);
        printf("Enter the width of rectangle : ");
        scanf("%d",&w);
        area = l * w;
        printf("%f",area);
        break;
    case 3:
        printf("Enter the higth of triangle : ");
        scanf("%d",&hb);
        printf("Enter the base of triangle : ");
        scanf("%d",&b);
        area = hb * b;
        printf("%f",area);
        break;
    default:
        break;
    } 
    return 0;
}