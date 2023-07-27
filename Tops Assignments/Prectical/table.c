/* 5 * 1 = 5 */
#include<stdio.h>
int main(){
    int t, i, ans;
    printf("Enter the no of table : ");
    scanf("%d",&t);
    for(i = 1; i <= 10; i++)
    {
        ans = t * i;
        printf("\n%d * %d = %d",t,i,ans);
    }
}