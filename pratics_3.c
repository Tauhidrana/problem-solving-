#include <stdio.h>

int main(){
int a;
scanf("%d", &a);
int mod = a % 2;
// printf("mod = %d\n", mod);

if (mod == 0)
{
    printf("It is a even number\n");
}
else{
    printf("It is a odd number\n");
}
return 0;
}
