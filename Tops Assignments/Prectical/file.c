#include<stdio.h>
int main()
{
    FILE *str;
    char new[30];
    str = fopen("Demo.txt","a");
    fprintf(str,"Parth");
    fclose(str);
    return 0;
}