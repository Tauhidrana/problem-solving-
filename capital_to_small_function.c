#include <stdio.h>
void capital_to_small()
{

    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    printf("%c ", ch);
}
int main()
{
    capital_to_small();

    return 0;
}