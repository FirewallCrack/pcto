#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Inserire 3 vaolri\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Hai inserito i seguenti valori: %d, %d, %d\n", a, b, c);
    if(a+b>c && b+c> a && a+c>b)
    {
        printf("ABC è un triangolo\n");
    }
    else 
    {
        printf("ABC non è un triangolo\n");
    }
}