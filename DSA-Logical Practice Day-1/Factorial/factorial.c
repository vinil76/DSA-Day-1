#include <stdio.h>
int main()
{
    int n;
    int sum = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("The Factorial of %d is %d", n, sum);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum = sum * i;
        }
        printf("The Factorial of %d is %d ", n, sum);
    }

    return 0;
}