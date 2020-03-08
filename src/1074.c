#include <stdio.h>

int main(void)
{int n_testes = 0, i = 0;
    scanf("%d", &n_testes);

    while(i < n_testes)
    {long int n = 0;
        scanf(" %ld", &n);

        if(n == 0)
        {
            printf("NULL\n");
        } else if(n % 2 == 0)
        {
            printf("EVEN ");
            if(n < 0)
            {
                printf("NEGATIVE\n");
            } else {
                printf("POSITIVE\n");
            }
        } else {
            printf("ODD ");
            if(n < 0)
            {
                printf("NEGATIVE\n");
            } else {
                printf("POSITIVE\n");
            }
        }
        i++;
    }
    

    return 0;
}