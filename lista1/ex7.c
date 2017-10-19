#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,exp;
    scanf("%d", &x);
    scanf("%d", &y);
    for(exp=x; y>1; y=y-1)
    {
        exp = exp*x;
    }
    printf("%d",exp);
}
