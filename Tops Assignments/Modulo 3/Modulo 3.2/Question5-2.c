//WAP to tack 10no. input from user and find out..
/*How many Even numbers are there
  How many odd numbers are there
  sum of even numbers
  sum of odd numbers
*/
#include<stdio.h>
int main()
{
    int array[10];
    int countOdd = 0;
    int countEven = 0;
    int i,oddsum, evensum;
    
    printf("Enter the 10 value : \n");
    for(i = 0; i <= 10; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for(i = 0; i <= 10; i++)
    {
        if(array[i]%2==0)
        {
            evensum+=i;
            countEven++;
            
        }
    }
	printf("Even numbers sum is: %d",evensum);
    printf("\n%d Even noumbers",countEven);
    for(i = 0; i <= 10; i++)
    {
        if(array[i]%2!=0)
        {
            oddsum+=i;
            countOdd++;
            
        }
    }
    printf("\nOdd numbers sum is: %d",oddsum);
    printf("\n%d Odd numbers",countOdd);
    
    return 0;
}