/*
Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo)
*/

#include<stdio.h>
int main()
{
    int a, b;
    int ch;
    printf("Enter the value of \nA: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
    printf("Enter your choice \n1. Addition\n2.Subtriction\n3.Multiplication\n4.Division\n5.Modulo :");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Addition is : %d",a+=b);
        break;
    case 2:
        printf("Subtriction is : %d",a-=b);
        break;
    case 3:
        printf("Multiplication is : %d",a*=b);
        break;
    case 4:
        printf("Division is : %d",a/=b);
        break;
    case 5:
        printf("Modulo is : %d",a%=b);
        break;
    default:
        printf("Invalid choice...");
        break;
    }
}