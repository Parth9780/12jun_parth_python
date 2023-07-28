#include<stdio.h>
int i,j,k;
char c;
for(i=1; i<=6; i++){
    for(j=6; j>=i; j--)
    {
        printf("* ");
    }
    printf("\n");
}