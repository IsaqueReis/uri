#include <stdio.h>

int main(void)
{int validator = 0;
 int tmp = 0;

    do{
        int valida = 0;
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
        
        puts("novo calculo (1-sim 2-nao)");
        scanf("%d", &tmp);
        
        while(tmp < 1 || tmp > 2)
        {
            puts("novo calculo (1-sim 2-nao)");
            scanf("%d", &tmp);
        }

        if(tmp == 1)
        {
            continue;
        } else {
            validator = 2;
        }
        
    } while(validator != 2);

    return 0;
}