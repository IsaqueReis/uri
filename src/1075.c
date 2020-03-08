#include <stdio.h>

int main(void)
{int i = 1;
 int n = 0;
    scanf("%d", &n);
    while(i <= 10000)
    {
        if(i % n == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}