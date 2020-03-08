#include <stdio.h>

int fatorial (int numero) 
{
    return numero == 0 ? 1 : numero * fatorial(numero - 1);
}

int main(void)
{int n = 0;
    scanf("%d", &n);
    printf("%d\n", fatorial(n));
    return 0;
}