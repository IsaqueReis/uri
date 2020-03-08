#include <stdio.h>

int main(void)
{int x = 0, y = 0;
    while(scanf("%d %d", &x, &y) == 2 && x != 0 && y != 0)
    {   
        if(x > 0 && y > 0)
        {
            puts("primeiro");
        } else if(x < 0 && y > 0)
        {
            puts("segundo");
        } else if(x < 0 && y < 0)
        {
            puts("terceiro");
        } else {
            puts("quarto");
        }
    }

    return 0;
}