#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Dimmi un numero\n");
    scanf("%d", &a);
    b = a;
    c = a%b;
    d = 0;
    while((c!=0)||(b>1))
    {
         c=a%b;
         b=b-1;
         if (c==0)
         {
            d=d+1;
         }
    }
    if(d>1)
    {
        printf("%d non è primo, ha altri %d divisori oltre a 1 e se stesso\n", a, d-1);
    }
    else
    {
        printf("%d è primo\n", a);
    }
}