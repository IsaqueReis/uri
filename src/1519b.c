#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_FRASE 10000 
#define MAX_PALAVRA 323
#define ALFABETO 26
#define DELIM " "

char **getPalavras(char *s)
{
    int bufsize = 31;
    int i = 0;

    char **palavras = calloc(1, bufsize * sizeof(char*));
    char *palavra = strtok(s, DELIM); //pega a primeira palavra
    while(palavra != NULL) //enquanto for diferente de NULL
    {
        palavras[i] = palavra; //adiciona ao vetor de strings
        i++;

        if(i > bufsize)
        {
            bufsize += 31;
            palavras = realloc(palavras, bufsize * sizeof(char*));
        }
        palavra = strtok(NULL, DELIM); //procura a proxima palavra
    }
    palavras[i] = NULL;
    return palavras;
}//getPalavras

void imprimePalavras(char **s)
{
    for(int i = 0; s[i] != NULL; i++)
        printf("%s\n", s[i]);
    return;
}//imprimePalavras

void imprimeArr(int len, int *v)
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");

    return;
}//imprimeArr

void imprimeChArr(int len, char *v)
{
    for(int i = 0; i < len; i++)
        printf("%c ", v[i]);
    printf("\n");

    return;
}//imprimeArr

int main(void)
{char frase[MAX_FRASE+1] = {'\0'};
    while(scanf("%[^\n]", frase) == 1 && frase[0] != '.')
    {getchar();
     /*char **palavras = getPalavras(frase);
     int   tamanhos[MAX_PALAVRA] =    {0};
     char  iniciais[MAX_PALAVRA] = {'\0'};
     int           lenTamanhos   =      0;
     int           lenIniciais   =      0;
     
        for(; palavras[lenTamanhos] != NULL; lenTamanhos++)
            tamanhos[lenTamanhos] = strlen(palavras[lenTamanhos]);
        
        for(; palavras[lenIniciais] != NULL; lenIniciais++)
            iniciais[lenIniciais] = palavras[lenIniciais][0];

        tamanhos[lenTamanhos-1]--; //ultima palavra fica com 1 a mais no strlen

        imprimePalavras(palavras);
        imprimeArr(lenTamanhos, tamanhos);
        imprimeChArr(lenIniciais, iniciais);*/

        printf("%s\n", frase);
    }
    return 0;
}