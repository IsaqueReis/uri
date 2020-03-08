#include <stdio.h>

int main(void)
{float soma = 1;
    for(int i = 2; i <= 100; i++)
    {
        soma += ((1)/(float)(i));
    }
    printf("%.2f\n", soma);
}