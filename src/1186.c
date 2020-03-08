#include <stdio.h>

double sumVector(double *n, int fst, int lst)
{double soma = 0;
    for(int i = fst; i < lst; i++)
    {
        soma += n[i];
    }
    return soma;
}

int main(void)
{double m[12][12];
 //int line = 0;
 char ch = 'o';

    //scanf("%d", &line);
    scanf(" %c", &ch);

    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    double soma = 0;
    int j = 12;
    for(int i = 0; i < 12; i++)
    {
        soma += sumVector(m[i], j, 12);
        j--;
    }
    /*int decrement = 11;
    for(int i = 0; i < 11; i++)
    {
    }*/

    if(ch == 'S')
    {
        printf("%.1lf\n", soma);
    }

    double media = 0;
    if(ch == 'M')
    {media = ((soma) / (66));
        printf("%.1lf\n", media);
    }
    return 0;
}