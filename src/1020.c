#include <stdio.h>

int main(void)
{int dias;
 int tmp1, tmp2, tmp3;
    scanf("%d", &dias);
    
    tmp1 = dias/365;
    tmp2 = (dias%365)/30;
    tmp3 = (dias%365)%30;
    
    //printf("%d %d %d\n", tmp1, tmp2, tmp3);
    printf("%d ano(s)\n", tmp1);
    printf("%d mes(es)\n", tmp2);
    printf("%d dia(s)\n", tmp3);
    return 0;
}