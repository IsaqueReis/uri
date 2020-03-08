/*Total: R$ 10.00*//*1 - 4.00
 2 - 4.5
 3 - 5.0
 4 - 2.0
 5 - 1.5*/
 
/*ler item e qtde, retornar valor*/

#include <stdio.h>

int main(void)
{int number, qtde;
 float total = 0;
    scanf("%d %d", &number, &qtde);
    
    switch(number)
    {
        case 1: total = qtde * 4.00; break;
        case 2: total = qtde * 4.50; break;
        case 3: total = qtde * 5.00; break;
        case 4: total = qtde * 2.00; break;
        case 5: total = qtde * 1.5; break;
        default: total = 0; break;
    }
    
    printf("Total: R$ %.2f\n", total);
    return 0;
}