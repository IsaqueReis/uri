#include <stdio.h>

int main(void)
{int i = 0;
 int contador = 0;

    while(i < 5)
    {int tmp = 0;
        scanf(" %d", &tmp);
        if(tmp % 2 == 0)
        {
            contador++;
        }
        i++;
    }

    printf("%d valores pares\n", contador);
    return 0;
}