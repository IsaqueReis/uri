#include <stdio.h>

void leN(int *n)
{
    scanf("%d", n);
    if(*n <= 0)
        leN(n);
    return;
}

int main(void)
{int a = 0, n = 0;
 int soma = 0;
   scanf("%d", &a);
   leN(&n);
    //printf("%d\n", a);
    //printf("%d\n", n);

    for(int i = 0; i < n; i++)
        soma += a + i;

    printf("%d\n",soma);
    return 0;
}