#include <stdio.h>

int main(void)
{int a = 0, b = 0;
    while(scanf("%d %d", &a, &b) == 2 && a != b)
    {
        if(a > b)
        {
            printf("Decrescente\n");
        }

        if(b > a)
        {
            printf("Crescente\n");
        }
    }
    return 0;
}