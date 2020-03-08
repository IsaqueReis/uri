#include <stdio.h>

int main(void)
{int i = 1;
 int position = 0;

 int old = 0;

    while(i <= 100)
    {int atual = 0;
        scanf("%d", &atual);
        if(atual > old)
        {
            old = atual;
            position = i;
        }
        i++;
    }

    printf("%d\n", old);
    printf("%d\n", position);
    
    return 0;
}