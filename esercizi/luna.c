#include <stdio.h>
int main()
{
    int a;
    printf("Sei nato lo stesso anno dell'allunaggio? Scopriamo!\n");
    printf("Inserire il suo anno di nascita\n");
    scanf("%d", &a);
    if(a==1969)
    {
        printf("Sì, sei nato lo stesso anno dell'allunaggio\n");
    }
    else if (a<1969)
    {
        printf("Sei nato %d anni prima dell'allunaggio\n", 1969-a);
    }
    else if (a>1969)
    {
        printf("Sei nato %d anni dopo l'allunaggio\n", a-1969);
    }
}