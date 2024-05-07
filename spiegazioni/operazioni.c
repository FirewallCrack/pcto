#include <stdio.h>

int main()
{
    int a = 2, b = 3;
    float c = 6.9, d = 1.04;
    double e = 1.82, f = 3.33333;
    

    printf("\nFamo le operazioni fra gli int:\n\n");

    printf("- somma: %d\n", a+b);
    printf("- differenza: %d\n", a-b);
    printf("- moltiplicazione: %d\n", a*b);
    printf("- divisione: %d\n\n", a/b);

    printf("Ora i float: \n\n");

    printf("- somma: %f\n", c+d);
    printf(" -differenza: %f\n", c-d);
    printf(" -moltiplicazione: %f\n", c*d);
    printf(" -divisione: %f\n\n", c/d);

    printf("Infine i double: \n\n");

    printf(" -somma: %lf\n", e+f);
    printf(" -differenza: %lf\n", e-f);
    printf(" -moltiplicazione: %lf\n", e*f);
    printf(" -divisione: %lf\n", e/f);
}
