#include <stdio.h>
void gello(){
    printf("Gello ");
}
void hello(){
    gello();
    printf("Hello ");
}
int main()
{
 printf("main ")  ;
 hello();

    return 0;
}