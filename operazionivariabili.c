#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    float c = 6.9;
    float d = 1.04;
    double e = 1.82;
    double f = 3.33333;

    printf("famo le operazioni fra gli int\n\n");

    printf("somma: %d\n", a+b);
    printf("differenza: %d\n", a-b);
    printf("moltiplicazione: %d\n", a*b);
    printf("divisione: %d\n\n", a/b);

    printf("ora i float\n\n");

    printf("somma: %f\n", c+d);
    printf("differenza: %f\n", c-d);
    printf("moltiplicazione: %f\n", c*d);
    printf("divisione: %f\n\n", c/d);

    printf("infine quei coglioncelli dei double\n\n");

    printf("somma: %lf\n", e+f);
    printf("differenza: %lf\n", e-f);
    printf("moltiplicazione: %lf\n", e*f);
    printf("divisione: %lf\n", e/f);
}
