#include <stdio.h>
int main()
{
    int a, b;
    printf("Dimmi un numero");
    scanf("%d", &a);
    b = a;
    while(a%(b-1)<1)
    {
         b=b-1;
    }
}