#include <stdio.h>


int main(void)
{int k = 0;
    
    while(scanf("%d", &k) == 1 && k != 0)
    {int origenX = 0, origenY = 0;
        scanf(" %d %d", &origenX, &origenY);
        int i = 0;
        while(i < k)
        {int coordX = 0; int coordY = 0;
            scanf(" %d %d", &coordX, &coordY);
            if(coordX == origenX && coordY == origenY)
            {
                puts("divisa");
            } else if(coordX > origenX && coordY > origenY)
            {
                puts("NE");
            } else if(coordX < origenX && coordY > origenY)
            {
                puts("NO");
            } else if(coordX < origenX && coordY < origenY)
            {
                puts("SO");
            } else if(coordX > origenX && coordY < origenY) 
            {
                puts("SE");
            } else {
                puts("divisa");
            }
            i++;
        }//while
    }//while
    return 0;
}