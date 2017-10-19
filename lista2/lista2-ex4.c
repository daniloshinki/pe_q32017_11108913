#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mult(float a, float b)
 {
    printf ("%.2f",a*b);
 }

void soma(float a, float b)
 {
    printf ("%.2f",a+b);
 }

 void divisao(float a, float b)
 {
    printf ("%.2f",(a/b));
 }

  void sub(float a, float b)
 {
    printf ("%.2f",a-b);
 }

  void expo(float a, float b)
 {
    printf ("%.2f",pow(a,b));
 }




 int main ()
 {
    int opcao;
    float x,y;
    scanf("%d",&opcao);
    if(opcao==1){
        scanf("%f",&x);
        scanf("%f",&y);
        soma(x,y);
        return 0;
    }
    if(opcao==2){
        scanf("%f",&x);
        scanf("%f",&y);
        sub(x,y);
        return 0;
    }
    if(opcao==3){
        scanf("%f",&x);
        scanf("%f",&y);
        mult(x,y);
        return 0;
    }
    if(opcao==4){
        scanf("%f",&x);
        scanf("%f",&y);
        divisao(x,y);
        return 0;
    }
    if(opcao==5){
        scanf("%f",&x);
        scanf("%f",&y);
        expo(x,y);
        return 0;
    }
 }
