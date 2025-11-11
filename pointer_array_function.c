#include <stdio.h>
void fun( int a[], int x)
{
for (int i = 0; i < x; i++)
{
    printf("%d ", a[i]);
}


}
int main()
{
 int x;
 scanf("%d", &x);
 int a[x];
 for (int i = 0; i < x; i++)
 {
   scanf("%d", &a[i]);
 }
   fun(a,x);

    return 0;
}