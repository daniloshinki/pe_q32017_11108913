#include <stdio.h>
#include <stdlib.h>

int fatorial(int num)
{
    return ((num <= 1)?1: (num * fatorial(num-1)));
}

int binomial(n,p)
{
    return (fatorial(n)/(fatorial(p)*fatorial(n-p)));
}

int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    printf("%d",binomial(n,p));
}
