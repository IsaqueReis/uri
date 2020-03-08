/*saida
    576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
*/
/*
    Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo 
necessárias, conforme o exemplo fornecido. 
Não esqueça de imprimir o fim de linha após cada linha, caso contrário 
seu programa apresentará a mensagem: “Presentation Error”.
*/

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#define MAX                                                                   7

#define mycalloc(n)                                               (calloc(1,n))
typedef uint32_t myint;

/*
char *splitString(char *s, int sigv)
{char *tmp = mycalloc(500 + 1 * sizeof(char));
 int j = 0;
    if(!tmp)
    {
        fprintf(stderr,"allocation error!\n");
        exit(1);
    }
    
    for(int i = sigv; s[i] != '\0'; i++)
    {
        tmp[j] = s[i];
        j++;
    }
}
*/
char *mycpystr(char *in, char *out, int n)
{
    for(int i = n, j = 0; in[n] != '\0'; i++, j++)
    {
        out[j] = in[i];
        out[j] = '\0';
    }

    return out;
}

int notasDeCem(char *s)
{
    switch(strlen(s))
    {
        case MAX : return atoi(s) / 100;
        case 6   : return atoi(s) / 100;
        case 5   : return atoi(s) / 100;
        case 4   : return atoi(s) / 100;
        case 3   : return atoi(s) / 100;
        case 2   : return 0;
        case 1   : return 0;
        default  : return 0;
    }

}


int main(void)
{char n[MAX+1];

    scanf("%s", &n);
    if(atoi(n) > 1000000)
        return 0;
    /*
    for(int i = 0; n[i] != '\0'; i++)
    {
        printf("%c\n", n[i]);
    }
    */
    //int significantValue = length(n) - 2;
    //resto = splitString(n, significantValue);

    printf("o numero tem %d casas decimais\n", strlen(n));
    
    printf("%d nota(s) de R$ 100,00\n", result[0]);
    return 0;
}