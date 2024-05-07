#include <stdio.h>
int main()
{
    int a, b;
    printf("Inserire valore di a: ");
    scanf("%d", &a);
    printf("Inserire valore di b: ");
    scanf("%d", &b);
    printf("\nEcco il valore di a: %d\n", a);
    printf("Ecco il valore di b: %d\n", b);
    printf("Ecco la somma fra a e b: %d\n", a+b);
    printf("Ecco la differenza fra a e b: %d\n", a-b);
    printf("Ecco il prodotto fra a e b: %d\n", a*b);
    printf("Ecco il quoziente fra a e b: %d\n", a/b);
}