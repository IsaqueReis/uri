#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define isPar(n) ((((n) % (2)) == (0)) ? (true) : (false))

unsigned long long somaArr(unsigned long long n, unsigned long long v[n])
{unsigned long long soma = 0;
    for(int i = 0; i < n; i++)
        soma += v[i];
    
    return soma;
}


int main(void)
{unsigned long long n_estrelas = 0;

 unsigned long long contador = 0;
 unsigned long long acumulador = 0;

 unsigned long long i = 0;
 unsigned long long j = 0;

    scanf("%llu", &n_estrelas);
    unsigned long long jornada[n_estrelas];
    {
        while(i < n_estrelas)
        {
            scanf(" %llu", &jornada[i]);
            i++;
        }
    }
    
    unsigned long long totalCarneiros = somaArr(n_estrelas, jornada); //tem o total de carneiros da jornada
    bool isAllImpar = false;

    while(j < n_estrelas && j >= 0)
    {
        if(!isPar(jornada[j]))
        {
            if(jornada[j] > 0)
            {
                jornada[j]--;
                acumulador++;
                contador++;
                isAllImpar = true;
            }
            //puts("avancou");
            j++;
        } else {
            if(jornada[j] > 0)
            {
                jornada[j]--;
                acumulador++;
            }
            isAllImpar = false;
            //puts("regressou");
            j--;
        }
    }
    
    if(isAllImpar)
        printf("%llu %llu\n",contador,((totalCarneiros)-(acumulador)));
    else
    {contador++;
        printf("%llu %llu\n",contador,((totalCarneiros)-(acumulador)));
    } 

    return 0;
}//main