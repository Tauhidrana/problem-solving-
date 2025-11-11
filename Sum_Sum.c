#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 1; i <= n; i++)
   {
      scanf("%d", &a[i]);
   }
   int sum = 0;
   if (n > 0)
   {
      sum = sum + n;
      if (n < 0)
      {
         sum = sum + n;
      }
   }
   printf("%d", sum);

   return 0;
}