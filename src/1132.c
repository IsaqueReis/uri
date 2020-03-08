#include <stdio.h>

#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void)
{long a = 0, b = 0;
 long soma = 0;
 
    scanf("%d %d", &a, &b);
    long min = min(a, b); //printf("%ld\n", min);
    long max = max(a, b); //printf("%ld\n", max);
    
    int i = min;
    while(i <= max)
    {
        if(i % 13 != 0)
        {
            soma += i;
        } else {

        }
        i++;
    }
    
    printf("%ld\n", soma);
    return 0;
}