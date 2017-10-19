#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float a,b,t,p,a1;
int i;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&t);
scanf("%f",&p);
for(i=0;i<10;i++){
a1 = (a+b)/2;
b = sqtr(a*b);
t = t-pow((p*(a - a1)),2);
p = 2*p;
a = a1;
}
}
