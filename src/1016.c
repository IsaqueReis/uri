#include <stdio.h>
/*saida 30 -> 60 minutos
        110 -> 220 minutos
        7 -> 14 minutos
*/

int calc(int km)
{
    return km*2;
}

int main(void)
{int dist;
    scanf("%d", &dist);
    
    printf("%d minutos\n", calc(dist));
    
    return 0;
}