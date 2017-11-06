#include <stdio.h>
#include <stdlib.h>


void repeticoes(int v[], int aux[], int n)
{
	int i, x;

	for(i=0; i<n; i++){
		x = v[i];
		aux[x] += 1;
	}
}

int main()
{
	int n, i, x;

	scanf("%d",&n);
	int *v = malloc(n * sizeof(int));
	for (i=0; i<n; i++){
		scanf("%d",&v[i]);
	}
	int *aux = malloc((x+1) * sizeof(int));
	repeticoes(v, aux, n);

	for(i=0; i<n; i++){
		if (aux[v[i]] > 1) {
			printf("%d-%d ", v[i], aux[v[i]]);
			aux[v[i]] = 0;
		}
	}

	printf("\n");
	free(v);
	free(aux);

	return 0;
}
