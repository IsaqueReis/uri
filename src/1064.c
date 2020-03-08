#include <stdio.h>

int main(void)
{int i  = 0;
 float soma = 0.0;
 float numero = 0.0;
 int contador = 6;

    while(i < 6)
    {float tmp = 0.0;
        scanf(" %f", &tmp);
        numero = tmp;
        if(numero < 0)
        {
            contador--;
            continue;
        }

        soma += numero;
        i++;
    }

    printf("%d valores positivos\n", contador);
    printf("%.1f\n", ((soma) / (contador)));

    return 0;
}