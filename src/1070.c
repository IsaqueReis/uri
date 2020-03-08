#include <stdio.h>

int main(void)
{int numero = 0;
 int i = 0;
 int count = 0;

    scanf("%d", &numero);
    
    if(numero % 2 != 0)
    {
        printf("%d\n", numero);
    }

    do
    {numero++;
        if(numero % 2 != 0)
        {
            printf("%d\n", numero);
            count++;
        }
        
    }while(count != 6);

    return 0;
}