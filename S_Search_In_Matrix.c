#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int n;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == n)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}