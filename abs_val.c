#include <stdio.h>
int my_abs(int x) {
int ans = abs(x);

return ans;
}
int main()
{
 int x;  
scanf("%d", &x);
printf("%d", my_abs(x));

    return 0;
}