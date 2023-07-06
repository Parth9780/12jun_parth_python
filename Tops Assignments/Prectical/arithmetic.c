/*
    the task will be perform only two number of value
    Addition
    subtriction
    multiplication
    devision
*/
#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of \n m: ");
    scanf("%d",&m);
    printf("\n n: ");
    scanf("%d",&n);
    printf("the Addition of m and n is: %d", m+=n);
    printf("\nthe subtraction of m and n is: %d", m-=n);
    printf("\nthe multiplication of m and n is: %d", m*=n);
    printf("\nthe division of m and n is: %d", m/=n);
    printf("\nthe modulo of m and n is: %d", m%=n);
    return 0;
}
