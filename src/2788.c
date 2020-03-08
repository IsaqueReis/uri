#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned long long ll;

int main(void)
{ll n = 0,  m = 0;
 ll value = 0;
    scanf("%llu %llu", &n, &m);
    //while(value % m == 0)
    //{
       
    //}
    
        for(int j = 0; j < 10; j++)
        {
            value = n * 10 + j;
            if(value % m == 0)
                break;
            printf("%llu\n", value);
        }
    return 0;
}