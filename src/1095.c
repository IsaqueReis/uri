#include <stdio.h>

int main(void)
{int i = 1, j = 60;
    printf("I=%d J=%d\n", i, j);

    while(j > 0)
    {
        j -= 5;
        i += 3;
        printf("I=%d J=%d\n",i,j);
    }

}