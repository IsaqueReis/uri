#include <stdio.h>
#include <string.h>

int numDeLeds(char *s)
{unsigned long long contador = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        switch(s[i])
        {
            case '0' : contador += 6; break;
            case '1' : contador += 2; break;
            case '2' : contador += 5; break;
            case '3' : contador += 5; break;
            case '4' : contador += 4; break;
            case '5' : contador += 5; break;
            case '6' : contador += 6; break;
            case '7' : contador += 3; break;
            case '8' : contador += 7; break;
            case '9' : contador += 6; break;
            default : break;

        }
    }
    return contador;
}

int main(void)
{int n_testes = 0;
 char value[100+1];
 int i = 0;
    scanf("%d", &n_testes);
    
    while(i < n_testes)
    {
        scanf("%s", &value);
        
        printf("%d leds\n", numDeLeds(value));
        i++;
    }

    return 0;
}