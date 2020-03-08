#include <stdio.h>

int main(void)
{int i = 0, idade = 0;
 int soma = 0;
    while(scanf("%d", &idade) == 1 && idade >= 0)
    {
        soma += idade;
        i++;
    }
    printf("%d %d\n", soma, i);
    printf("%.2f\n", ((soma) / (float) i));
    return 0;
}