#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is %d", n, sum);
    return 0;
}