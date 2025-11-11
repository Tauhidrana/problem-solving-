#include <stdio.h>
#include <string.h>
int main()
{
 char a[20], b[20];
 scanf("%s %s", &a,&b);
 int v = strcmp(a,b);
if (v<0)
{
    printf("%s", a);
}
else if (v<0)
{
    printf("%s", b);
}
else if (v==0)
{
   printf("%s", a);
}


    return 0;
}