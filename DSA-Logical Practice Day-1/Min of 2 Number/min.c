#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter he second number:");
    scanf("%d", &b);
    if (a < b)
    {
        printf("%d is smaller than %d", a, b);
    }
    else
    {
        printf("%d is smaller than %d", b, a);
    }
    return 0;
}