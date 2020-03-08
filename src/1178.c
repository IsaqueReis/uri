#include <stdio.h>

double metade(double n)
{
    return n / 2.0;
}

int main(void)
{double n[100];
 double i = 0;
    scanf("%lf", &i);

    n[0] = i;
    for(int j = 1; j < 100; j++)
    {
        n[j] = metade(n[j-1]);
    }

    for(int k = 0; k < 100; k++)
    {
        printf("N[%d] = %.4f\n", k, n[k]);
    }

    return 0;
}