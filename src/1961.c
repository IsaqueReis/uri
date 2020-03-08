#include <stdio.h>

int verifica(int *n, int pulo)
{int val = 0;
    for(int i = 0; n[i] != -1; i++)
    {
        if(((n[i+1]) - (n[i])) <= pulo)
        {
            if(n[i+1] >= pulo)
            {
                val = 1;
            }   
        } else {
            val = 0;
            return val;
        }
    }
    return val;
}

int main(void)
{int p = 0, n = 0; //p = altura do pulo do sapo, n = numero de canos
 int i = 0;

    scanf("%d %d", &p, &n); 

 int canos[n+1];

    while(i < n)
    {
        scanf("%d", &canos[i]);
        canos[i+1] = -1;
        i++;
    }

    printf("%s\n", ((verifica(canos, p)) == (1)) ? ("YOU WIN") : ("GAME OVER"));
    return 0;
}