// 1.monday to sunday using switch case
#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the days of no: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thesday");
        break;
    case 6:
        printf("Firday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid day");
        break;
    }
	return 0;
}