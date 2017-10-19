#include <stdio.h>
#include <stdlib.h>

int potencia (int x, int n)
{
    if(n == 0)
        return 1;
    else if(n > 0)
        return x * potencia(x, n-1);
}

int main(){
int x,y;
scanf("%d",&x);
scanf("%d",&y);
printf("%d",potencia(x,y));
}
