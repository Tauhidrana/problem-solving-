#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    
    scanf("%d", &b);

    int mod = a % b;
    if (mod == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}