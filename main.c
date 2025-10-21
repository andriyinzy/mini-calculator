#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a; double b; int o;

    printf("Введіть число 1: ");
    scanf("%lf", &a);

    printf("Choose an operation:\n1 = +\n2 = -\n3 = *\n4 = /\n");
    scanf("%d", &o);

    printf("Введіть число 2: ");
    scanf("%lf", &b);

    if (o==1) printf("%g + %g = %g\n", a, b, a+b);
    if (o==2) printf("%g - %g = %g\n", a, b, a-b);
    if (o==3) printf("%g * %g = %g\n", a, b, a*b);
    if (o==4) printf("%g / %g = %g\n", a, b, a/b);

    return 0;
}
