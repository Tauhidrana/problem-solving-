#include <stdio.h>
void odd_even()
{
int n;
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
int odd =0;
int even =0;
for (int i = 0; i < n; i++)
{
    if (a[i]%2 == 0)
    {
        
        odd++;
    }
    if (a[i] % 2 !=0)
    {
        even++;
    }
    
    
}


printf("%d %d", odd,even);

}
int main()
{
   odd_even();

    return 0;
}