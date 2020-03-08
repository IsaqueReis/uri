#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char str[200+1];
} PALAVRA;

void printCatalogo(int len, PALAVRA p[])
{
    for(int i = 0; i < len; i++)
        printf("%s\n", p[i].str);
    //printf("\n");
}

int compare(const void *a, const void *b) 
{
    return (strcmp((char *) a, (char *) b)); //strcmp
}

void ordenaNome(PALAVRA *sort, int len)
{int i, j;
 PALAVRA tmp;
    for(i = 1; i < len; i++)
    {
        tmp = sort[i];
        for(j = i; (j > 0) && (strcmp(tmp.str, sort[j-1].str) < 0); j--)
            sort[j] = sort[j-1];
        sort[j] = tmp;
    }
}//ordenaNome

int olhaAcima(char *acima, char *abaixo, int len)
{int contador = 0;
    for(int i = 0; i < len; i++)
    {
        if(abaixo[i] == acima[i])
        {
            contador++;
        } else {
            break;
        }
    }
    return contador;
}

int main(void)
{int telefones = 0;
    while(scanf("%d", &telefones) != EOF)
    {int i = 0;
     int soma = 0;
     PALAVRA catalogo[telefones];
        while(i < telefones)
        {
            scanf(" %s", catalogo[i].str);
            i++;
        }//whileScanf
        //ordenaNome(catalogo, telefones);
        qsort (catalogo, telefones, sizeof(PALAVRA), compare);
        //printCatalogo(telefones, catalogo);
        
        for(int i = 0; i < telefones-1; i++)
        {

            soma += olhaAcima(catalogo[i].str, catalogo[i+1].str, 
                                      strlen(catalogo[i+1].str));
            //printf("iteracao[%d], soma:%d\n", i,soma);
        }//for
        printf("%d\n", soma);
        
    }//whileEOF
    return 0;
}