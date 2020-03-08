#include <stdio.h>

typedef unsigned long long ll;

int nCasas(ll val)
{
    int count = 0;
    ll local = val;
    while(local > 0)
    {
        local /= 10;
            count++;
    }
    return count;
}

/*
    https://youtu.be/qgVCDJCwFzU?t=1396
*/

void print(int ord, int casas, int mtz[][ord])
{

    for(int i = 0; i < ord; i++)
    {
        for(int j = 0; j < ord; j++)
        {
            printf("%*d", casas, mtz[i][j]);
            if(j < ord-1)
                printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{int ordem = 0;
    while(scanf("%d", &ordem) == 1 && ordem > 0)
    {int mtz[ordem][ordem];
     ll maior = 0;
        int k = 1, outer = 1;
        for(int i = 0; i < ordem; i++)
        {
            k = outer;
            for(int j = 0; j < ordem; j++)
            {
                if(i == 0 && j == 0)
                {
                    k *= 1;
                }
                if(j == 0)
                {
                    mtz[i][j] = k;
                    if(k > maior)
                        maior = k;
                } else {
                    k *= 2;
                    mtz[i][j] = k;
                    if(k > maior)
                        maior = k;
                }
            }
            outer *= 2;
        }

        print(ordem, nCasas(maior), mtz);
        printf("\n");
    }    
    return 0;
}