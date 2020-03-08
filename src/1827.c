#include <stdio.h>

int main(void)
{
    int val = 0, center = 0, ldi = 0, ldj = 0,
    start = 0;
    while(scanf("%d", &val) != EOF)
    {
        center = val / 2;
        ldj = val - 1;
        start = (val / 3) + 1;
        for(int i = 0; i < val; i++)
        {
            for(int j = 0; j < val; j++)
            {
                printf("0");

                if(i == j && i == center && j == center)
                    printf("4");
                if(i == j)
                    printf("2");
                if(i == ldi && j == ldj)
                    printf("3");
                

                ldi++;
                ldj--;
            }
            printf("\n");
        }
    }
    return 0;
}