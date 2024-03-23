#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks);
    if (marks == 100)
    printf("excellent \n");
    else if (marks <= 100 && marks >= 90)
        printf("wow!!");
    else if (marks <= 90 && marks >= 80)
        printf("good");

    else if (marks <= 80 && marks >= 70)
        printf("avg");

    else if (marks <= 70 && marks >= 60)
        printf("not bad!!");

    else if (marks <= 60 && marks >= 50)
        printf("bad!!");
    else 
    printf("fail");
    return 0;
}
