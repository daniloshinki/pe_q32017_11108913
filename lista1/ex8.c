#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,aux,count;
    scanf("%d", &i);
    x=0;
    y=1;
    for(count=0; count<i; count++)
    {
        if(count<=1)
        {
            aux = count;
        }
        else
        {

            aux=x+y;
            x=y;
            y=aux;
        }

        printf("%d\n", aux);
    }
    return 0;
}
