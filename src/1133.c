#include <stdio.h>

#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(void)
{long a = 0, b = 0;
 
    scanf("%d %d", &a, &b);
    long min = min(a, b); //printf("%ld\n", min);
    long max = max(a, b); //printf("%ld\n", max);
    
    int i = min;
    while(i < max)
    {i++;
     if(i == max) {break;}
        if(i % 5 == 2 || i % 5 == 3)
        {
            printf("%ld\n", i);
        } else {
            //printf("passou aq\n");
        }
    }
    return 0;
}