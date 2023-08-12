//  WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
    int days, years;
    int ch;
    printf("Plese Choice Any One- \n1. days-to-year\n2. year-to-days\nEnter: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter The Days: ");
            scanf("%d",&days);
            printf(" %d year is %d",days,days/365);
            break;
        case 2:
            printf("Enter the Years: ");
            scanf("%d",&years);
            printf("%d days is %d",years, years*365);
            break;
        default:
            printf("Invalid Choice!!");
    }
    return 0;
}