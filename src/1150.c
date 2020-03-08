#include <stdio.h>

void leN(int x, int *z)
{
    scanf("%d", z);
    if(*z <= x)
        leN(x,z);
    return;
}

int main(void)
{int x = 0, z = 0;
    scanf("%d", &x);
    leN(x, &z);
    
    int i = 1;
    int tmp = x;
    while(x < z)
    {tmp++;
        x += tmp;
        printf("%d\n", x);
        i++;
    }

    printf("%d\n",i);
    return 0;
}

