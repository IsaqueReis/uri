#include <stdio.h>


int main(void)
{
    int t = 0, r1 = 0, r2 = 0;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        scanf("%d %d", &r1, &r2);
            getchar();
        
        printf("%d\n", r1 + r2);
    }
    return 0;
}