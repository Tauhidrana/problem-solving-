#include <stdio.h>
int rec(char a[], int i)
{
    if (a[i] == '\0')
    {
        return 0;
    }
    int cnt = rec(a, i + 1);
    if (a[i]== 'a'|| a[i]== 'e'|| a[i]== 'i'|| a[i]== 'o' || a[i]== 'u' || a[i]== 'A'|| a[i]== 'E'|| a[i]== 'I'|| a[i]== 'O' || a[i]== 'U')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
    
    
}
int main()
{
    char a[201];
    fgets(a, 201, stdin);
    int ans = rec(a, 0);
    printf("%d", ans);
    return 0;
}