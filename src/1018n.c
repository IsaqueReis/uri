#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{char input[7+1];
 int notas[] = {0,0,0,0,0,0,0};
    scanf("%s", input);
    int valor = atoi(input);
    if(valor > 1000000) {return 0;}

    if(valor >= 100 && valor <= 1000000)
    {
        notas[0] = valor / 100;
    }

    int resto = valor - (notas[0] * 100);

    //printf("%d %d %d\n", valor, notas[0], resto);
    
    while(resto != 0)
    {
        if(resto < 100 && resto >= 50)
        {
            notas[1]++;
            resto = resto - 50;
            continue;
        }

        if(resto < 50 && resto >= 20)
        {
            notas[2]++;
            resto = resto - 20;
            continue;
        }

        if(resto < 20 && resto >= 10)
        {
            notas[3]++;
            resto = resto - 10;
            continue;
        }
        
        if(resto < 10 && resto >= 5)
        {
            notas[4]++;
            resto = resto - 5;
            continue;
        }

        if(resto < 5 && resto >= 2)
        {
            notas[5]++;
            resto = resto - 2;
            continue;
        }

        if(resto < 2 && resto >= 1)
        {
            notas[6]++;
            resto = resto - 1;
            continue;
        }
    }
         printf("%d nota(s) de R$ 100,00\n", notas[0]);
        printf("%d nota(s) de R$ 50,00\n",  notas[1]);
        printf("%d nota(s) de R$ 20,00\n",  notas[2]);
        printf("%d nota(s) de R$ 10,00\n",  notas[3]);
        printf("%d nota(s) de R$ 5,00\n",   notas[4]);
        printf("%d nota(s) de R$ 2,00\n",   notas[5]);
        printf("%d nota(s) de R$ 1,00\n",   notas[6]);

}