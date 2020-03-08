#include <stdio.h>

int main(void)
{int a = 0, b = 0;
 int n_testes = 0;
 int i = 0;

    scanf("%d", &n_testes);
    while(i < n_testes)
    {
        scanf(" %d %d", &a, &b);
        if(b == 0)
        {
            puts("divisao impossivel");
        }else{
            float divs = (float) a / b;
            printf("%.1f\n", divs);
        }
            
        i++;
    }
    return 0;
}