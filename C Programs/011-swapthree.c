#include <stdio.h>
int main()
{
    int a, b,c;
    a=100;
    b=200;
    printf("before swapping :a =%d,b =%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping:a = %d,b =%d \n",a,b);

    return 0;
}