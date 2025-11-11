#include <stdio.h>
void my_len(int s)
 {
int ans = strlen(s);
printf("%d",ans );
}
int main()
{
 char s[10];
 scanf("%s", &s); 
my_len(s);

    return 0;
}