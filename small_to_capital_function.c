#include <stdio.h>
void small_to_capital()
{
    char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<= 'z')
    {
        ch = ch-32;
    }
    printf("%c", ch);
}
int main()
{
   small_to_capital();

    return 0;
}