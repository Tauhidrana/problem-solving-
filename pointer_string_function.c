#include <stdio.h>
#include <string.h>
void fun(int s[] )
{
   int stl = strlen(s);
   printf("%d\n", stl);
   printf("%s", s);
}
int main()
{
char n;
scanf("%d", &n);
char s[n];
scanf("%s", s);

fun(s);

    return 0;
}