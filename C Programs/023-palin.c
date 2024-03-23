#include <stdio.h>
int main()
{
    int n, n1, reverse = 0, rem;
    printf("enter the number:");
    
    scanf("%d", &n); // 9536; 12321;
    n1=n;
    while (n != 0)
    {
        rem = n % 10; // 9536 % 10 = 6; 953 % 10 = 3; 95 % 10 = 5; 9 % 10 = 9;
        reverse = reverse * 10 + rem; // 60 + 3 = 63; 630 + 5 = 635; 6350 + 9 = 6359;
        n = n / 10; // 9536 / 10 = 953; 953 / 10 = 95; 95 / 10 = 9; 9 / 10 = 0;
    }
    if(n1==reverse)
    {
        printf("IT IS A PALINDROME NUMBER");
    }
    else
    {
        printf("IT IS NOT A PALINDROME");
    }
    return 0;
}