// bitwise operator
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of \na: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b); 
    printf("Bitwise and operator & is: %d",a&b);
    printf("\nBitwise or operator | : %d",a|b);
    printf("\nBitwise xor operator ^ is: %d",a^b);
    printf("\nBiswise complement operator: %d",~a);
    printf("\nShift left: %d",a<<1);
    printf("\nShift right : %d",a>>1);
    return 0;
}