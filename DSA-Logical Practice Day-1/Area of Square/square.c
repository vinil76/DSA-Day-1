// area = a*a;
#include <stdio.h>
int main()
{
    int a;
    int area;
    printf("Enter a number: ");
    scanf("%d", &a);
    area = a * a;
    printf("The area of the square is: %d", area);
    return 0;
}