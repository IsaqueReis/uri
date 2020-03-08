#include <stdio.h>

int main(void)
{int n_testes = 0,  i = 0;
 long int contadorIn = 0;
 long int contadorOut = 0;
    scanf("%d", &n_testes);
    while(i < n_testes)
    {long int n = 0;
        scanf(" %d", &n);
        
        if(n >= 10 && n <= 20)
        {
            contadorIn++;
        } else {
            contadorOut++;
        }
            
        i++;
    }

    printf("%d in\n",contadorIn);
    printf("%d out\n",contadorOut);

    return 0;
}