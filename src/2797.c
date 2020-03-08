#include <stdio.h>
#include <stdbool.h>

/*
    1- Não pode haver alunos em duas fileiras consecutivas.
    2 -Com base na confiança na turma, Bibika escolhe um número $C$ e exige que, 
       em cada fileira, existam pelo menos C lugares vagos ou com tipo de prova 
       diferente entre dois alunos que estão com o mesmo tipo de prova.
*/

void arrCpy(int len, int src[], int dst[])
{
    for(int i = 0; i < len; i++)
        dst[i] = src[i];
    return;
}//arrCpy

void printArr(int len, int v[])
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
}

bool verificaFila(int len, int v[])
{
    for(int i = 0; i < len; i++)
    {
        if(v[i] != 0)
            return true;
    }
    return false;
}//verificaFila

void pegaFila(int fila, int n, int m, int sala[][m], int *out, int *lenOut)
{int j = 0;
    for(int i = 0; i < m; i++)
    {
        for(j; j < n; j++)
        {
            out[j] = sala[j][fila];
        }//copia fila
    }
    *lenOut = j;
}

char verificaValidade(int n, int m, int c, int sala[][m])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j > 0)
            {int tmp[n];
             int lenTmp;
                pegaFila(j-1, n, m, sala, tmp, &lenTmp);
                if(sala[i][j] != 0 && verificaFila(lenTmp, tmp))
                    return 'N';
            }//aluno a esquerda

            if(j < n-1)
            {int tmp[n];
             int lenTmp;
                pegaFila(j+1, n, m, sala, tmp, &lenTmp);
                if(sala[i][j] != 0 && verificaFila(lenTmp, tmp))
                    return 'N';
            }//aluno a direita

            if(c != 0)
            {
                if(i < m - c && sala[i][j] != 0)
                {
                    if(sala[i][j] == sala[i+c][j])
                        return 'N';
                }
            }//igualAcima

            if(i >= c)
            {
                if(sala[i][j] == sala[i - c][j] && sala[i][j] != 0)
                    return 'N';
            }//igualAbaixo
        }
    }
    return 'S';
}

int main(void)
{int linhas = 0, colunas = 0, distancia = 0;
    scanf("%d %d %d", &linhas, &colunas, &distancia);
        int sala[linhas][colunas];
    {
        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
            {
                scanf(" %d", &sala[i][j]);
            }//for j
        }//for i
    } //leitura do teclado
    char test = verificaValidade(linhas, colunas, distancia, sala);
    printf("%c\n", test);
    return 0;
}