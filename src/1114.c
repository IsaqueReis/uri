#include <stdio.h>
#include <string.h>

int main(void)
{char in[1024];
    while(scanf("%s", in) == 1)
    {
        if(!strcmp(in, "2002"))
        {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }
}