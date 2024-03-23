#include <stdio.h>
int main()
{
    int n, i,s;
    printf("enter the table num :");
    scanf("%d", &n);
    printf("enter the s range:");
    scanf("%d",&s);
    for (i = 1; i <=s; i++)
    printf("%dx%d=%d\n",i,n,i*n);
    
    return 0;
}