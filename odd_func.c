#include <stdio.h>

void count_odd()
{
    int x;
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
}

int main()
{

    count_odd();
    return 0;
}