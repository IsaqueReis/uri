#include <stdio.h>
#include <math.h>


int main(void)
{double entrada, fracao, inteiro;
 int grana[6] = {0,0,0,0,0,0};
 int cem = 0;
    scanf("%lf", &entrada);
    fracao = modf(entrada, &inteiro);

    if(inteiro >= 100.0 && inteiro <= 1000000)
    {
        cem = inteiro / 100;
    }

    double resto = inteiro - (cem * 100);

    /*printf("entrada>%lf, fracao>%lf, inteiro>%lf, resto>%lf, cem>%d\n ",
    entrada, fracao, inteiro, resto, cem);*/

    while(resto > 0)
    {
        if(resto < 100 && resto >= 50)
        {
            grana[0]++;
            resto = resto - 50;
            continue;
        } else if (resto < 50 && resto >= 20)
        {
            grana[1]++;
            resto = resto - 20;
            continue;
        }

        if(resto < 20 && resto >= 10)
        {
            grana[2]++;
            resto = resto - 10;
            continue;
        } else if (resto < 10 && resto >= 5)
        {
            grana[3]++;
            resto = resto - 5;
            continue;
        }

        if(resto < 5 && resto >= 2)
        {
            grana[4]++;
            resto = resto - 2;
            continue;
        } else if (resto < 2 && resto >= 1)
        {
            grana[5]++;
            resto = resto - 1;
            continue;
        } 
        
    }
    
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", grana[0]);
    printf("%d nota(s) de R$ 20.00\n", grana[1]);
    printf("%d nota(s) de R$ 10.00\n", grana[2]);
    printf("%d nota(s) de R$ 5.00\n",  grana[3]);
    printf("%d nota(s) de R$ 2.00\n",  grana[4]);
    printf("%d nota(s) de R$ 1.00\n",  grana[5]);

    return 0;
}