#include <stdio.h>
int main()
{
    int p, r, t;

    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the time period: ");
    scanf("%d", &t);
    printf("Simple Interest = %d", p * r * t / 100);

    return 0;
}