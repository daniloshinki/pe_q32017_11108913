#include <stdio.h>
#include <stdlib.h>

int main()
{
float num,volume=1;
int aux=3,i;
for(i=0;i<aux;i++){
scanf("%f", &num);
volume = volume*num;
}
printf("%.2f",volume);
}
