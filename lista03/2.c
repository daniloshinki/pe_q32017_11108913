#include <stdio.h>
#include <stdlib.h>

int tamanho(char entrada[])
{
	int i = 0;
	while (entrada[i] != '\0'){
    i++;
	}
	return i;
}

void inverte(char entrada[])
{
    int i;
	int x = tamanho(entrada);
	char aux[x];

	for(i=0; i<x; i++){
		aux[i] = entrada[x-1-i];
	}

	for(i=0; i<x; i++){
		entrada[i] = aux[i];
	}

}


int main()
{
	char entrada[255];
	fgets(entrada, 255, stdin);
    inverte(entrada);

	printf("%s\n", entrada);

    return 0;
}
