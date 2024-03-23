#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a value:");
    scanf("%d", &a);
    printf("enter b value:");
    scanf("%d", &b);

    if (a % b == 0)
        printf("ITS IS A EVEN NUMBER");
    else
        printf("ITS IS A ODD NUMBER");

    return 0;
}