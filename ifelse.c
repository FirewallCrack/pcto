#include <stdio.h>
int main()
{
    int a, b;
    printf("Inserisci un valore per a:\n");
    scanf("%d", &a);
    printf("Inserisci un valore per b:\n");
    scanf("%d", &b);
    if (a>b)
    {
       printf("'a' (%d) è maggiore di 'b' (%d)\n", a, b);
    }
    else
    {
        if (b>a)
         {
          printf("'a' (%d) è minore di 'b' (%d)\n", a, b);
         }
        else
        {
            printf("'a' (%d) è uguale a 'b' (%d)\n", a, b);
        }
    }

}