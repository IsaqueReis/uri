#include <stdio.h>
/*(segundos) -> h:m:s
    556 -> 0:9:16
    1 -> 0:0:1
    140153 -> 38:55:53
*/
int myminuts(int sec)
{int tmp = sec / 60;
    if((sec/60) > 60)
    {
        return tmp % 60;
    }

    return tmp;
}
int main(void)
{int seconds;
    scanf("%d", &seconds);
    
    printf("%d:%d:%d\n",((seconds / 60)/ 60)
                        ,(myminuts(seconds)),(seconds % 60));

    int test = seconds / 60;
    int test2 = test % 60;

    printf("%d\n",test2);
    return 0;
}