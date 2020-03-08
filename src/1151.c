#include <stdio.h>

int main(void)
{int n = 0;
    scanf("%d", &n);
    int i = 1;
    int j = 0;
    printf("%d ", j);
    for(int k = 1; k < n; k++)
    {int tmp = i + j; 
        printf("%d", tmp);
        i = j;
        j = tmp;
        if(k < n-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}