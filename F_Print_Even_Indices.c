#include <stdio.h>
void fun(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    fun(a, n, i + 1);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    fun(a, n, 0);

    return 0;
}