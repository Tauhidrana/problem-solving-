#include <stdio.h>

int main()
{
    long long int A;
    long long int B;
    double C;
    char D;

    scanf("%lld", &A);
    scanf("%lld", &B);
    scanf("%lf",&C);
    scanf(" %c", &D);

    printf("%lld\n", A);
    printf("%lld\n", B);
    printf("%.2lf\n", C);
    printf("%c", D);
    return 0;
}