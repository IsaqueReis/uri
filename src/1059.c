#include <stdio.h>

int main()
{int i = 1;
    for(i; i <= 100; i++)
    {if(i% 2 == 0)
        {
            printf("%d\n", i);
        } else {
            continue;
        }    
    }
    return 0;
}