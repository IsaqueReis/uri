#include <stdio.h>
#include <stdlib.h>


void arrcpy(long *src, long *dest, long len)
{
    for(int i = 0; i < len; i++)
        dest[i] = src[i];
    
} //copia array src para dest

void printVec(long len, long *a)
{
    if(len == 0)
    {
        printf("0");
    }
    for(int i = 0; i < len; i++)
        printf("%ld ", a[i]);
    printf("\n");
} //imprime vetor

void repetition(long len_a, long *arr, long *out, long *lenOut)
{long ghostA[len_a];
 int i, j, repete = 0, n = 0;

    for (i = 0; i < len_a; i++) 
    {
        if (i == 0) 
        {
            ghostA[n] = arr[i];
            n++;
        } else {
        repete = 0;
        //percorre o vetor distinto verificando se o valor v[i] existe no mesmo
        for (j = 0; j < n; j++) 
        {
            if(arr[i] == ghostA[j]) 
            {
                repete++;
            }
        }
            //se o valor v[i] não foi encontrado no vetor distinto, então adiciona
            if (repete < 1) 
            {
                ghostA[n] = arr[i];
                n++;// aumenta o tamanho do vetor distinto
            }
        }
    }
    *lenOut = n;
    arrcpy(ghostA, out, len_a);
}

void clean(long len, long *src, long *dest, long *lenDest)
{int j = 0;
    for(int i = 0; i < len; i++)
    {
        if(src[i] == -1)
        {
            continue;
        } else {
            dest[j] = src[i];
            j++;
        }
    }
    *lenDest = j;
}

void filter(long len_a, long *deckA, 
               long len_b, long *deckB)
{long ghostA[len_a];
 long ghostB[len_b];
 arrcpy(deckA, ghostA, len_a);
 arrcpy(deckB, ghostB, len_b);

    for(int i = 0; i < len_b; i++)
    {   
        for(int j = 0; j < len_a; j++)
        {
            if(deckA[j] == deckB[i])
            {
                deckA[j] = -1;
            }
        }
    }

    for(int i = 0; i < len_a; i++)
    {
        for(int j = 0; j < len_b; j++)
        {
            if(deckB[j] == ghostA[i])
            {
                deckB[j] = -1;
            }
        }
    }

    return;
}//seta com -1 as ocorrencias que sao iguais em ambos os vetores

int main(void)
{long a = 0, b = 0;
    while(scanf("%ld %ld", &a, &b) == 2 && a != 0 && b != 0)
    {long deckA[a];     //deck a
     long deckB[b];     //deck b
    
     long lenA = 0;
     long cleanedA[a];
     long lenB = 0;
     long cleanedB[b];
     
     long lenRepetitionA = 0;
     long noRepetitionA[a];

     long lenRepetitionB = 0;
     long noRepetitionB[b];
    

        for(int i = 0; i < a; i++) //leitura deck alice
            scanf(" %ld", &deckA[i]);

        for(int i = 0; i < b; i++) //leitura deck beatriz
            scanf(" %ld", &deckB[i]);

        filter(a, deckA, b, deckB);

        clean(a, deckA, cleanedA, &lenA);
        clean(b, deckB, cleanedB, &lenB);
        
        repetition(lenA, cleanedA, noRepetitionA, &lenRepetitionA);
        repetition(lenB, cleanedB, noRepetitionB, &lenRepetitionB);

        if(lenRepetitionA >= lenRepetitionB)
        {
            printf("%ld\n", lenRepetitionB);
        } else {
            printf("%ld\n", lenRepetitionA);
        }

    }

    return 0;
}