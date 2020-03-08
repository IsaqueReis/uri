#include <stdio.h>

unsigned long long int flubionacci(int n)
{unsigned long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 61; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    return fib[n];
}

int main(void)
{int n_testes = 0;
 int i = 0;
    scanf("%d", &n_testes);

    while(i < n_testes)
    {int val = 0;
        scanf("%d", &val);
        printf("Fib(%d) = %llu\n",val, flubionacci(val));
        i++;
    }

    //printf("%ld\n", flubionacci(0));
    return 0;
}