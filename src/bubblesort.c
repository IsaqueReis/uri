#include <stdio.h>
#include <stdlib.h>


void troca(int *a, int *b)
{int tmp = *a;
*a = *b;
*b = tmp;
}//troca

int bubblesort(int len, int v[])
{int contador = -1;
    for(int i = 0; i < len; i++)
    {
    for(int j = 0; j < len-1; j++)
        if(v[j] > v[j+1])
        {    
            troca(&v[j], &v[j+1]); //troca os valores
            contador++;
        }
    }//for
}//bubblesort

int main(void)
{int ntestes = 0;
    while(scanf("%d", &ntestes) != EOF)
    {int size = 0;
     int d = 1;
        scanf(" %d", &size);
        int vet[size];
        int i = 0;
            while(i < size)
            {
                scanf(" %d", &vet[i]);
                i++;
            }
        printf("Case %d: %d\n",d, bubblesort(size, vet));
        d++;
    }
    return 0;
}