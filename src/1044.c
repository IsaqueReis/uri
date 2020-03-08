#include <stdio.h>

#define MSG1 "Sao Multiplos"
#define MSG2 "Nao sao Multiplos"

int main(void)
{int a, b;
    scanf("%d %d", &a, &b);
    if(b % a == 0) {puts(MSG1);} else {puts(MSG2);}
    return 0;
}