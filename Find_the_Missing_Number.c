#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int ans1, a, b, c;
        scanf("%lld %lld %lld %lld", &ans1, &a, &b, &c);
        long long int mul = a * b * c;

        int ans2 = ans1 / mul;
        if (mul * ans2 == ans1)
        {
            printf("%lld\n", ans2);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}