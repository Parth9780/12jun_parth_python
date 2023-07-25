/* w a p to find a simple interest */

#include<stdio.h>
#include<math.h>

int main() {
    int principal, time;
    float rate, interest;
    printf("Enter the principal: ");
    scanf("%d",&principal);
    printf("\nEnter the rate : ");
    scanf("%f",&rate);
    printf("\nEnter the time : ");
    scanf("%d",&time);
    interest = principal*rate*time/100;
    printf("The simple interest is :%f",interest);
    return 0;
}