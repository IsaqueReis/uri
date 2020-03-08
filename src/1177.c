#include <stdio.h>

int main(void)
{int i = 0;
 int j = 0;
 int a[1000];
 int n = 0;
    scanf("%d", &n);
    while(i < 1000)
    {
        a[i] = j;
        j++;
        if(j >= n)
        {
            j = 0;
        }
        i++;
    }

    for(int k = 0; k < 1000; k++)
    {
        printf("N[%d] = %d\n", k, a[k]);
    }
    return 0;
}