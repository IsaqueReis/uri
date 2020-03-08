#include <stdio.h>

int main(void)
{int valida = 0;
 float soma = 0.0;

    while(valida < 2)
    {float nota = 0.0;
        scanf("%f", &nota);
        if(nota < 0)
        {
            puts("nota invalida");
            continue;
        } else if(nota > 10.0)
        {
            puts("nota invalida");
            continue;
        }
        
        soma += nota;
        valida++;
    }

    printf("media = %.2f\n", ((soma) / (2)));
    return 0;
}