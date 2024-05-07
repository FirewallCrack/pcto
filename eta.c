#include<stdio.h>
int main()
{
    int eta;
    printf("Quanti anni hai?\n");
    scanf("%d", &eta);
    if (eta<18)
    {
        if (eta<1)
        {
            printf("ERRORE! ETÀ NEGATIVA O IMPOSSIBILE: FAI IL SERIO\n");
        }
        else
        {
            printf("Hai %d anni, sei minorenne\n", eta);
        }
    }
    else
    {
        if (eta>18)
        {
            if (eta>100)
            {
                printf("Ha ha ha che divertente. Non hai realmente %d anni\n", eta);
            }
            else 
            {
                printf("Hai %d anni, sei maggiorenne\n", eta);
            }
        }
        
    }
}