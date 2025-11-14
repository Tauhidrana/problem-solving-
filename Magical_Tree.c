#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int up_line = (n + 11) / 2;  
    int spc = up_line - 1;
    int star = 1;

    for (int i = 1; i <= up_line; i++)
    {
        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");

        star = star + 2;
        spc--;
    }

    spc = 5;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
