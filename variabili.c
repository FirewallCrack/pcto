#include <stdio.h>

//VARIABILI//

int main ()
{

    int a; // NUMERI INTERI
    float b; // NUMERI CON VIRGOLA (MAX 6)
    double c; // NUMERI CON VIRGOLA (MAX 15)
    char d; // UN CARATTERE

    a = 2;
    b = 3.14;
    c = 2.9104;
    d = 'f';

    printf("a: %d\n", a);   // %d x int
    printf("b: %f\n", b);   // %f x float
    printf("c: %lf\n", c);  // %lf x double
    printf("d: %c\n", d);   // %c x char


    // nelle virgolette %x fuori il nome della variabile

    a = 61;

    printf("a: %d\na/b: %f\n", a, a/b);
}