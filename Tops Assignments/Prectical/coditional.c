/* W A P to find the maximum out of three number 
    end using conditional operator.
*/
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    (a>b) ? ((a>c) ? (printf("A is max")) : (printf("C is max"))) : ((b>c) ? (printf("B is max")) : (printf("C is max")));
    return 0;
}