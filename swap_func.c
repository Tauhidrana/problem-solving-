#include <stdio.h>

void  swap_it(){

    int x,y;
    scanf("%d %d", &x,&y);
int tmp = x;

x=y;
y=tmp;

printf("%d %d ", x,y);
}

int main()
{
   swap_it();

    return 0;
}