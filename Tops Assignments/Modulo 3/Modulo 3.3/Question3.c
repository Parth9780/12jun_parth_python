//WAP to find reverse of string using recursion.
#include<stdio.h>
#include<string.h>
void revers();
int main()
{
    printf("Enter the string: ");
    revers();
    return 0;
}
void revers()
{
    char c = getchar();
    if(c != '\n')
    {
        revers();
        printf("%c",c);
    }
}