#include<stdio.h>
int main()
{
    int eta;
    printf("Quanti anni hai?\n");
    scanf("%d", &eta);
    if (eta>18&&eta<120)
    {
        printf("Hai %d anni, sei maggiorenne\n", eta);
    }
    else if (eta> 120)
    {
        printf("Non credo tu abbia veramente %d anni, non sei divertente\n", eta);
    }
    else if (eta>0&&eta<18)
    {
        printf("Hai %d anni, non sei maggiorenne\n", eta);
    }
    else if (eta<0)
    {
        printf("Non è possibile che tu abbia %d anni, non fai ridere\n", eta);
    }
}