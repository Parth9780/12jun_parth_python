//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int no;
    printf("Enter the no :");
    scanf("%d",&no);
    (no%2 == 0) ? (printf("%d is even",no)) : (printf("%d is odd",no));
    return 0;
}