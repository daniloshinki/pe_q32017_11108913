#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void *b) {
	return ( *(int*)a - *(int*)b );
}

float mediana (int vetor[], int n)
{
	float mediana;

	if (n%2 != 0) return vetor[n/2];

	mediana = (vetor[(n/2) -1] + vetor[n/2]) / 2;

	return mediana;
}


int main()
{
	int n, i;
	scanf("%d", &n);

	int *vetor = malloc(n * sizeof(int));
	for (i=0; i<n; i++) {
		scanf("%d", &vetor[i]);
	}

	qsort(vetor, n, sizeof(int), cmpfunc);

	printf("%.2f\n", mediana(vetor, n));
	free(vetor);

	return 0;
}
