#include <stdio.h>

int main(void)
{int i = 1, j = 7;
 int count = 0;

    while(i <= 9)
    {
        printf("I=%d J=%d\n",i,j);
        
        count++;
        j--;

        if(count == 3)
        {
            i += 2;
            j = 7;
            count = 0;
        }
    }
    return 0;
}