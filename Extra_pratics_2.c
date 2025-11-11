#include <stdio.h>

int main()
{
    int a = -4;
    int c = 6;
    // scanf("%a %c", &a, &c);
    if (a > 0, c > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.", a, c);
    }
    else if (a < 0, c > 0)
    {
        printf("The coordinate point (%d,%d) lies in the 2nd quadrant.", a, c);
    }
    else if (a < 0, c < 0)
    {
        printf("The coordinate point (%d,%d) lies in the 3rd quadrant.", a, c);
    }
    else if (a < 0, c < 0)
    {
        printf("The coordinate point (%d,%d) lies in the 4th quadrant.", a, c);
    }
     else{
        printf("it on mina point");
     }
 
    return 0;
}