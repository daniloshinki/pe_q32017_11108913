#include <stdio.h>
#include <stdlib.h>

int vogais(char entrada[])
{
    int count =0, i;

 	for(i=0; entrada[i]!='\0'; i++){

        if (entrada[i]=='a' || entrada[i]=='e' || entrada[i]=='i' || entrada[i]=='o' || entrada[i]=='u'){

        count++;
 		}
 	}

return count;
}

int main()
{
 	char entrada[255];
 	fgets(entrada, 255, stdin);

    printf("%d\n", vogais(entrada));
	return 0;
}
