//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the years: ");
    scanf("%d",&year);
    if(year%400 == 0)
    {
        printf("%d is the leap year",year);
    }
    else if (year%100 == 0)
    {
        printf("%d is the not a leap year",year);
    }
    else if(year%4 == 0)
    {
        printf("%d is the leap year",year);
    }
    else
    {
        printf("%d is the not a leap year",year);
    }
    return 0;
}