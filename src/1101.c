#include <stdio.h>

#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void)
{int a = 0, b = 0;
 int soma = 0;

    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a <= 0 || b <= 0)
        {
            break;
        }
        
        int min = min(a, b);
        int max = max(a, b);
    
        while(min <= max)
        {
            printf("%d ", min);
            soma += min;
            min++;
        }

        printf("Sum=%d\n", soma);
        soma = 0;        
    }
    
    return 0;
}