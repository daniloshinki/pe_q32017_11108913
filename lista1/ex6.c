#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fatorial;
    scanf("%d", &num);
    for(fatorial=1; num>1; num=num-1)
    {
        fatorial = fatorial*num;
    }
        printf("%d",fatorial);

}
