#include <stdio.h>


int main(void)
{float in;
 int counter = 6;
 int i = 0;
    while(i < 6)
    {scanf("%f", &in);
        if(in < 0)
        {counter--;}
        i++;
    }

    printf("%d valores positivos\n", counter);
    return 0;
}