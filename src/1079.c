#include <stdio.h>

float media(float a, float b, float c)
{float media = 0.0;
 float peso = 10.0;

    media = (((a)*(2)) + ((b) * (3)) + ((c) * (5)))/peso;

    return media;
}


int main(void)
{int n_testes = 0;
 int i = 0;
    scanf("%d", &n_testes);
    while(i < n_testes)
    {float a = 0.0, b = 0.0, c = 0.0;
        scanf(" %f %f %f", &a, &b, &c);
        printf("%.1f\n", media(a, b, c));
        i++;
    }

    return 0;
}