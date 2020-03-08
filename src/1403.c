#include <stdio.h>

int arrMaior(int len, int v[len])
{
    int i = 0;
    int position = 0;
    int old = 0;
    while (i < len)
    {
        int atual = v[i];
        if (atual > old)
        {
            old = atual;
            position = i;
        }
        i++;
    }

    return old;
} //retorna o maior numero em um vetor

int arrMaiorP(int len, int v[len])
{
    int i = 0;
    int position = 0;
    int old = 0;
    while (i < len)
    {
        int atual = v[i];
        if (atual > old)
        {
            old = atual;
            position = i;
        }
        i++;
    }

    return position;
} //retorna a posicao do maior numero em um vetor

void flagMin(int len, int v[len])
{
    int maior = arrMaior(len, v);
    for (int i = 0; i < len; i++)
        if (v[i] < maior)
            v[i] = -1;
    return;
} //marca os menores com -1

void arrPrnt(int len, int v[len])
{
    for (int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
    return;
} //escreve na tela os elementos de um vetor qualquer

void arrFreq(int len, int v[len], int intervalo, int freq[intervalo])
{
    for (int i = 0; i < intervalo; i++)
        freq[i] = 0;

    for (int i = 0; i < len; i++)
        freq[v[i]]++;
    return;
} // devolve um vetor com as frequencias

void finalValue(int len, int v[len], int *out, int *len_out)
{
    int k = 0;
    int position = 0;

    for (int i = 0; i < len; i++)
    {
        if (v[i] == -1)
        {
            continue;
        }
        else
        {
            position = i;
            out[k] = position;
            k++;
        }
    }
    *len_out = k;
    return;
} //retorna o vetor só com os valores que precisamos

int main(void)
{
    int n = 0, m = 0;

    while (scanf("%d %d", &m, &n) == 2 && m != 0 && n != 0)
    {
        int n_rankings = ((m) * (n));
        int rankingTotal[n_rankings];

        for (int i = 0; i < n_rankings; i++)
            scanf(" %d", &rankingTotal[i]);

        int intervalo = (arrMaior(n_rankings, rankingTotal) + 1); //intervalo de frequencias
        int freq[intervalo];

        arrFreq(n_rankings, rankingTotal, intervalo, freq); //frequencia no vetor rankings

        freq[arrMaiorP(intervalo, freq)] = -1; //pontuacao do vovo

        int final[intervalo]; //vetor com os segundos lugares
        int len_final = 0;

        flagMin(intervalo, freq); //marca os menores com -1

        finalValue(intervalo, freq, final, &len_final); //devolve um vetor com o numero dos segundos lugares
        arrPrnt(len_final, final);                      //imprime na tela
    }

    return 0;
}