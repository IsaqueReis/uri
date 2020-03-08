#include <stdio.h>

int main(void)
{int i = 0;
 int contadorP = 0;
 int contadorI = 0;
 int contadorPP = 0;
 int contadorN = 0;

    while(i < 5)
    {int tmp = 0;
        scanf(" %d", &tmp);
        if(tmp % 2 == 0)
        {
            contadorP++;
        } else {
            contadorI++;
        }
    
        if(tmp < 0)
        {
            contadorN++;
        } else if(tmp == 0) {
           
        } else {
            contadorPP++;
        }

        i++;
    }

    printf("%d valor(es) par(es)\n", contadorP);
    printf("%d valor(es) impar(es)\n", contadorI);
    printf("%d valor(es) positivo(s)\n", contadorPP);
    printf("%d valor(es) negativo(s)\n", contadorN);

    return 0;
}