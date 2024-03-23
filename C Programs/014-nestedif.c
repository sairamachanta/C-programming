#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if (num > 0)
        printf("NUMBER IS POSTIVE++");
    if (num < 0)
        printf("NUMBER IS NEGTIVE--");
    if (num == 0)
        printf("ITS IS ZERO");
    return 0;
}
