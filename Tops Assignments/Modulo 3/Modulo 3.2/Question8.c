//WAP to print number in reverse order e.g.: number=64728--->reverse= 82746
#include<stdio.h>
int main()
{
    int n, reversno, remider;
    printf("Enter the n number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        remider = n % 10;
        reversno = reversno * 10 + remider;
        n/10;
    }
    printf("Reversed number = %d",reversno);
    return 0;
}