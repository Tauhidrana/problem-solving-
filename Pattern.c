#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int has = 1;
    int spc = n - 1;

    for (int i = 1; i <= (n*2) - 1; i++)
    {

        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= has; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }

            if (i % 2 == 0)
            {
                printf("-");
            }
        }

        if (i <= n - 1)
        {
            spc--;
            has = has + 2;
        }
        else
        {
            spc++;
            has = has - 2;
        }
        printf("\n");
    }
    return 0;
}