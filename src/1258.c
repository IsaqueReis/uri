#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sCor
{
    char nome[100];
    char cor[10];
    int tamanho;
} CAMISA;

void ordenaTamanho(CAMISA *sort, int len)
{int i, j;
 CAMISA tmp;
    for(i = 1; i < len; i++)
    {
        tmp = sort[i];
        for(j = i; (j > 0) && (tmp.tamanho < sort[j-1].tamanho); j--)
            sort[j] = sort[j-1];
        sort[j] = tmp;
    }
}

void ordenaNome(CAMISA *sort, int len)
{int i, j;
 CAMISA tmp;
    for(i = 1; i < len; i++)
    {
        tmp = sort[i];
        for(j = i; (j > 0) && (strcmp(tmp.nome, sort[j-1].nome) < 0); j--)
            sort[j] = sort[j-1];
        sort[j] = tmp;
    }
}


void ordenaCor(CAMISA *sort, int len)
{int i, j;
 CAMISA tmp;
    for(i = 1; i < len; i++)
    {
        tmp = sort[i];
        for(j = i; (j > 0) && (strcmp(tmp.cor, sort[j-1].cor) < 0); j--)
            sort[j] = sort[j-1];
        sort[j] = tmp;
    }
}


void mostraCamisas(CAMISA *c, int len)
{
    for(int i = 0; i < len; i++)
    {char tmp = '@';
        switch(c[i].tamanho)
        {
            case 0 : tmp = 'P'; break;
            case 1 : tmp = 'M'; break;
            case 2 : tmp = 'G'; break;
            default: break;
        }

        printf("%s %c %s\n", c[i].cor, tmp, c[i].nome);
    }
}
 
int main(void)
{int n_camisas = 0;
 CAMISA camisas[61];
 int i = 0;
   while(scanf("%d", &n_camisas) == 1)
   {
        if(n_camisas <= 0)
                break;
            else 
            {char tmp = '@';
                for(int i = 0; i < n_camisas; i++)
                {fflush(stdin);
                    scanf(" %[^\n]", camisas[i].nome);
                    scanf( "%s %c", camisas[i].cor, &tmp);
                    if(tmp == 'P')
                        camisas[i].tamanho = 0;
                    else if(tmp == 'M')
                        camisas[i].tamanho = 1;
                    else
                        camisas[i].tamanho = 2;
                }

                ordenaNome(camisas, n_camisas);
                ordenaTamanho(camisas, n_camisas);
                ordenaCor(camisas, n_camisas);

                if(i != 0)
                    printf("\n");
                    
                mostraCamisas(camisas, n_camisas);
            }
        i++;
   }
    return 0;
}