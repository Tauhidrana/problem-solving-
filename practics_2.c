#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are Adult");
    }
    else if (age >= 15)
    {
        printf("You are child");
    }
    else if (age >= 10)
    {
        printf("You are baby");
    }

    else
    {
        printf("Access not given");
    }

    return 0;
}