#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18 && age < 60)
    {
        printf("You can have a driving license.");
    }
    if (age > 60)
    {
        printf("You can not have driving license.");
    }
    if (age < 18)
    {
        printf("You can not have driving license");
    }

    return 0;
}