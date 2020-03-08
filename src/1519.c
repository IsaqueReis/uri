#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_FRASE 10000 
#define MAX_PALAVRA 323
#define ALFABETO 26
#define DELIM " "


int strCountC(char *s, char ch)
{int contador = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            contador++;
    return contador;
}//strCountC

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

void imprimeIniciais(char len, char ch[len])
{
    for(int i = 0; i < len; i++)
        printf("%c ", ch[i]);
    printf("\n");
}//imprimeIniciais

void imprimeTamanhos(char len, int v[len])
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
}//imprimeTamanhos

void iniciaisFreq(int tamanhoIniciais, char iniciais[tamanhoIniciais], 
                                                    int frequencia[])
{char *alfabeto = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < strlen(alfabeto); i++)
        frequencia[i] = 0;
    
    for(int i = 0; alfabeto[i] != '\0'; i++)
    {int tmp = strCountC(iniciais, alfabeto[i]);
        frequencia[i] = tmp;
    }
    return;
}//iniciaisFreq

char escolhida(int frequencia[])
{char *alfabeto = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < strlen(alfabeto); i++)
    {
        if(frequencia[i] > 1)
        {
            return alfabeto[i];
        }
    }
    return '@';
}//escolhida

int posicaoEscolhida(char ch, char **s)
{int maiorLen = 0;
 int posicao = 0;
    for(int i = 0; s[i] != NULL; i++)
    {
        if(s[i][0] != ch)
        {    
            continue;
        } else {
           if(strlen(s[i]) > maiorLen)
           {
               maiorLen = strlen(s[i]);
               posicao = i;
           } 
        }
    }
    return posicao;
}//posicaoEscolhida

int main(void)
{char frase[MAX_FRASE+1] = {'\0'};
    while(scanf(" %[^\n]", frase) == 1 && frase[0] != '.')
    {fflush(stdin);
     char **palavras = getPalavras(frase);
     
     int tamanhos[MAX_PALAVRA] = {0};
     char iniciais[MAX_PALAVRA] = {'\0'};
     int frequencias[ALFABETO] = {0};
     int lenTamanhos = 0, lenIniciais = 0;
     char maisDeUma = '@';

        for(lenTamanhos; palavras[lenTamanhos] != NULL; lenTamanhos++)
            tamanhos[lenTamanhos] = strlen(palavras[lenTamanhos]);

        for(lenIniciais; palavras[lenIniciais] != NULL; lenIniciais++)
            iniciais[lenIniciais] = palavras[lenIniciais][0];
        
        //imprimePalavras(palavras);
        //imprimeIniciais(lenIniciais, iniciais);
        //imprimeTamanhos(lenTamanhos, tamanhos);
        iniciaisFreq(lenIniciais, iniciais, frequencias);
        maisDeUma = escolhida(frequencias);
        if(maisDeUma == '@')
            continue;
        else
            
        //imprimeTamanhos(ALFABETO, frequencias);
       
    }
    return 0;
}