#include <stdio.h>

int main(void)
{int n_testes = 0, i = 0;
 float coelhos = 0.0, ratos = 0.0, sapos = 0.0;
 float base = 0.0;


    scanf("%d", &n_testes);
    while(i < n_testes)
    {int ch = '@';
     int countC = 0, countR = 0, countS = 0;
     float somaC = 0.0, somaR = 0.0, somaS = 0.0;
     float qtde = 0.0;

            scanf(" %f %c", &qtde, &ch);
            if(ch == 'C')
            {
                somaC += qtde;
            } else if(ch == 'R')
            {
                somaR += qtde;
            } else {
                somaS += qtde;
            }
        
        coelhos += somaC;
        ratos += somaR;
        sapos += somaS;
        i++;
    }

    base = coelhos + ratos + sapos;

    printf("Total: %.0f cobaias\n",    base);
    printf("Total de coelhos: %.0f\n", coelhos);
    printf("Total de ratos: %.0f\n",   ratos);
    printf("Total de sapos: %.0f\n",   sapos);
    printf("Percentual de coelhos: %.2f %%\n", 100 * ((coelhos)/(base)));
    printf("Percentual de ratos: %.2f %%\n",   100 * ((ratos)/(base)));
    printf("Percentual de sapos: %.2f %%\n",   100 * ((sapos)/(base)));


    return 0;
}