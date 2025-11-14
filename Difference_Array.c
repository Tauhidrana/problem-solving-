#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (b[i] > b[j])
                {
                    int tmp = b[i];
                    b[i] = b[j];
                    b[j] = tmp;
                }
            }
        }

        int c[n];
        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(a[i] - b[i]));
            
        }
        printf("\n");
    }

    return 0;
}