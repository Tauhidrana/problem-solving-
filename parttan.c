#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int spc = n - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        spc--;
        star = star + 1;

        printf("\n");
    }

    return 0;
}