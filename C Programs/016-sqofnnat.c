#include <stdio.h>
int main()
{
    int n, i, sum ;
    printf("enter the range :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum +(i*i) ;
    }
    printf("%d", sum);
    return 0;
}