// WAP find out length of string without using inbuilt function
//WAP to print number in reverse order e.g.: number=64728--->reverse= 82746
#include<stdio.h>
int main()
{
    char s[30];
    int i,count=0;
    printf("Enter the string :");
    scanf("%s",&s);
    for (i = 0;s[i]!=0; i++)
    {
        count++;
    }
   /* while(num>0)
    {
    	num = num / 10;
        count++;
	}*/
    printf("Lenght of string is %d",count);
	return 0;
}