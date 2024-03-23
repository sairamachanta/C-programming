#include <stdio.h>
int main()
{
    int rating;
    printf("enter your rating:");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("EXCELLENT");
        break;
    case 2:
        printf("GOOD");
        break;

    case 3:
        printf("AVERAGE");
        break;

    case 4:
        printf("NOT BAD");
        break;

    case 5:
        printf("BAD");
        break;

    default: printf("INVAID RATING");
        break;
    }
    return 0;
}