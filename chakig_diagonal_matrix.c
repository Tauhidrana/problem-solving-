#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    bool is_diagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (a[i][j] != 0)
                {
                    is_diagonal = false;
                }
            }
        }
    }
    if (is_diagonal = true)
    {
        printf("It's a Diagonal matrix");
    }

    else
    {
        printf("Not diagonal matrix");
    }

    return 0;
}