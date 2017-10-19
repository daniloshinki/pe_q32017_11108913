#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CelsiusParaF(float temp)
 {
    printf ("%.2f F",(1.8*temp)+32);
 }

void CelsiusParaK(float temp)
 {
    printf ("%.2f",temp+273);
 }

 void FahrenheitParaC(float temp)
 {
    printf ("%.2f",(temp-32)/1,8);
 }

  void FahrenheitParaK(float temp)
 {
    printf ("%.2f",(temp-32)/9);
 }

   void KelvinParaC(float temp)
 {
    printf ("%.2f",temp-273);
 }

   void KelvinParaF(float temp)
 {
    printf ("%.2f F",(temp-273)/5);
 }

 void DecParaBina(int num)
 {
     int r,i;
     for(i = 31; i >= 0; i--) {
     r = num >> i;

    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
 }


 int main ()
 {
    int opcao;
    float temp,num;
    scanf("%d",&opcao);

    if(opcao==1){  //escolhe temperatura
        scanf("%d",&opcao);
    if(opcao==1){    //celsius entrada
     scanf("%d",&opcao);
     scanf("%f",&temp);
     if(opcao==2){
        CelsiusParaF(temp);
     }
     if(opcao==3){
        CelsiusParaK(temp);
     }
}
    if(opcao==2){ //fahrenheit entrada
        scanf("%d",&opcao);
        scanf("%f",&temp);
    if(opcao==1){
        FahrenheitParaC(temp);
     if(opcao==3){
        FahrenheitParaK(temp);
     }
}

    }

    if(opcao==3){ //kelvin entrada
        scanf("%d",&opcao);
        scanf("%f",&temp);
    if(opcao==1){
        KelvinParaC(temp);
     if(opcao==2){
        KelvinParaF(temp);
     }
}

    }
    }

//escolhe base numerica
   if(opcao==2){
        if(opcao==1){ //decimal para binario
        scanf("%d",&opcao);
        if(opcao==2){
            scanf("%d",&num);
            DecParaBina(num);
        }
        }
    }
 }
