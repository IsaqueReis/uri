#include <stdio.h>

#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void)
{int a = 0, b = 0;
 int n_testes = 0;
 int soma = 0;
 int i = 0;
    scanf("%d", &n_testes);
    
    while(i < n_testes)
    {  
        scanf("%d %d", &a, &b);
        
        int menor = min(a,b); //printf("%d\n", menor);
        int maior = max(a,b); //printf("%d\n", maior);

        menor++;

        while(menor < maior)
        {
            if(menor % 2 != 0)
            {
                //printf("%d\n", menor);
                soma += menor;
            }
            menor++;
        }
        printf("%d\n", soma);
        soma = 0;
        i++;
    }
    
    return 0;
}