#include <stdio.h>

int main(void)
{int i = 1, j = 7;

 int old = j;

 int count = 0;

    while(i <= 9)
    {
        printf("I=%d J=%d\n",i,j);
        
        count++;
        j--;

        if(count == 3)
        {
            i += 2;
            count = 0;
            old += 2;
            j = old;
        }
        
    }

    return 0;
}