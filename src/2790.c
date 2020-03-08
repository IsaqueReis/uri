#include <stdio.h>
#include <stdbool.h>

void printArr(int len, int v[])
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");

    return;
}//printArr

int movimento(int base, int face)
{
    if(base == face)
        return 0;
    if(base == (7 - face))
        return 2;
    return 1;
}//movimento

int maiorValor(int len, int v[])
{int maior = 0;
 int posicao = 0;
    for(int i = 0; i < len; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
            posicao = i;
        }
    }
    return posicao;
}//maiorValor

int melhorValor(int len, int v[])
{int melhor = 0;
    for(int i = 0; i < len - 1; i++)
    {
        if(movimento(v[i], v[i+1]) == 2)
            continue;
        else
            melhor = i;
    }
    return melhor;
}

int maiorQZero(int len, int maior, int v[], int *iguais)
{int contador = 0;
 int contador2 = 0;

    for(int i = 0; i < len; i++)
    {
        if(v[i] > 0)
            contador++;
        if(v[i] == maior)
            contador2++;
    }
    *iguais = contador2;
    return contador;
}

int melhorBase(int len, int v[])
{int frequencias[7] = {0};
 int maior = 0;
 int melhor = 0;
 int iguais = 0;
    //frequencia dos dados
    for(int i = 0; i < len; i++)
        frequencias[ v[i] ]++;
    
    maior = maiorValor(7, frequencias);
    int mZero = maiorQZero(7, maior, frequencias, &iguais);
    printf("%d maiores que zero\n%d iguais\n", mZero, iguais);

    if(iguais > 1)
    {
       melhor = melhorValor(7, frequencias);
    }
    return maior;
}//melhorBase

int organiza(int len, int base, int v[])
{int contador = 0;
    for(int i = 0; i < len; i++)
    {
        if(v[i] == base)
            continue;
        else
            contador += movimento(base, v[i]);
    }
    return contador;
}

int main(void)
{int nDados = 0;
    scanf("%d", &nDados);
    int dados[nDados];
    int i = 0;
    while(i < nDados)
    {
        scanf(" %d", &dados[i]);
        i++;
    }
    
    int base = melhorBase(nDados, dados);
    printf("%d\n", base);
    printf("%d\n", organiza(nDados, base, dados));
    return 0;
}