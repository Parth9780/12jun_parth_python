#include<stdio.h>
int main()
{
    int array[3][3];
    for(int i; i <= 3; i++){
        for(int j; j<=i; j++){
            printf("Enter the value of array[%d][%d]: ",i,j);
            scanf("%d%d",array[i][j]);
        }
    }
    for(int a; a <= 3; a++)
    {
        for(int b; b <= 3; b++)
        {
            printf("%d",array[a][b]);
        }
        printf("\n");
    }
    return 0;
}