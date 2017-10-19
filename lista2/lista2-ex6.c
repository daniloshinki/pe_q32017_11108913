#include <math.h>
#include <stdio.h>

main()
{
    float a, b, c, delta, raiz_delta;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = (pow(b, 2) - 4*a*c);

    if(delta >= 0)
    {
        if(delta == 0)
        {
            printf("%.2f", ((-b + sqrt(delta))/2*a));
        }

        else
        {
            printf("\n %.2f", ((-b + sqrt(delta))/2*a));
            printf(" %.2f", ((-b - sqrt(delta))/2*a));
        }
    }

    else
    {
        delta = fabs(delta);
        raiz_delta = sqrt(delta);

        printf("\n %.2f + %.2fi", ((-b)/2*a), ((raiz_delta)/2*a));
        printf(" %.2f - %.2fi", ((-b)/2*a), ((raiz_delta)/2*a));
    }

    return(0);
}
