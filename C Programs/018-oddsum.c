#include <stdio.h>
int main()
{
    int n, i, sum ;
    printf("enter the range :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum+(i*2-1) ;
    }
    printf("%d", sum);
    return 0;
}