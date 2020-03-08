#include <stdio.h>

int main(void)
{int n = 0;
 int i = 1;

    scanf("%d", &n);

    while(i <= n)
    {double quadrado = 0.0;
        if(i % 2 == 0)
        {quadrado = (double) i;
            printf("%d^2 = %.0lf\n", i, ((quadrado) * (quadrado)));
        }
        i++;
    }
    return 0;
}