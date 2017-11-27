#include <stdio.h>

typedef struct hora
{
	int m, s, d;
}tempo;

int converte(tempo *t)
{
	return((t->m *60) + t->s)*100 + t->d;
}

void diferenca(tempo *t1, tempo *t2)
{
	int x1 = converte(t1);
	int x2 = converte(t2);

	int resto = x2 - x1;

	t2->d = (resto%100);
	resto /=100;

	if(resto > 59){

		t2->m = resto/60;
		resto =resto%60;
		t2->s = resto;
	}

	else{

		t2->s = resto;
		t2->m = 00;
	}
}

int main()
{
	tempo t1, t2;

	scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
	scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));
	diferenca(&t1, &t2);

	if(t2.d < 0 || t2.s < 0){
		printf("%c%dm %ds %.2d\n",'-',t2.m, -t2.s, -t2.d/10);
	}else{

		printf("%dm %ds %d\n", t2.m, t2.s, t2.d);
	}

	return 0;
}
