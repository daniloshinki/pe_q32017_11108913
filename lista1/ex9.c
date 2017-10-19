#include <stdio.h>
#include <stdlib.h>

int main()
{
   float celsius, fahrenheit,temp;
   int opcao;
   scanf("%f", &temp);
   scanf("%d", &opcao);
if(opcao==1)
{
    fahrenheit = (1.8 * temp) + 32;
    printf("%f",fahrenheit);
}
else
{
    celsius = (temp - 32)/1.8;
    printf("%f",celsius);
}
return 0;
}
