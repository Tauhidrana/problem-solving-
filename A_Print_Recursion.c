#include <stdio.h>
void print_recutsion(int i,int n)
{
    if (i==n+1)
    {
        return;
    }
    
    printf("I love Recursion\n");
    print_recutsion(i+1, n);
}
int main()
{
    int n;
    scanf("%d", &n);

    print_recutsion(1,n);
    return 0;
}