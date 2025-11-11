#include <stdio.h>
void sum(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }

 
int suma = 0;

    
    
    printf("%d ", a[i]);
    sum(a, n,  i+1);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum(a, n, 0);
    return 0;
}