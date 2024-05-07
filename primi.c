#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Dimmi un numero\n");
    scanf("%d", &a);
    b = a-1;
    c = a%b;
    while(c!=0||b>1)
    {
         b=b-1;
         c = a%b;
    }
    if(b==1)
    {
        printf("%d è primo", a);
    }
    else
    {
        printf("%dnon è primo", a);
    }
}