// find the area of circle, rectangle and triangle..
	/*
		circle = pi*r*r;
		rectangle = l*w;
		triangle = hb*b/2;
	*/
#include<stdio.h>
int main()
{
    static float pi = 3.14;
    int redius;
    float circle;
    printf("Enter the redius of circle :");
    scanf("%d",&redius);
    circle = pi*redius*redius;
    printf("%f",circle);

    int l,w,rectangle;
    printf("\nEnter the length :");
    scanf("%d",&l);
    printf("Enter the weight :");
    scanf("%d",&w);
    rectangle = l*w;
    printf("%d",rectangle);

    int h,b,triangle=0;
    printf("\nEnter the hight of triangle: ");
    scanf("%d",&b);
    printf("Enter the base of triangle: ");
    scanf("%d",&b);
    triangle = h*b/2;
    printf("%d",triangle);
    return 0;
}