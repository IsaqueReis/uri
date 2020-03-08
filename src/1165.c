#include <stdio.h>

int isPrimo(long int n)
{int i = 0;
 int divisores = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
            divisores++;
        }
    }

    return divisores > 2 ? 1 : 0;

}

int main(void)
{
    printf("%d %d %d %d %d\n",isPrimo(2), isPrimo(3), isPrimo(4), isPrimo(5));
    return 0;
}