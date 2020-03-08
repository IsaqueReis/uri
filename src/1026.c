#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX_NBYTE_SIZE 32

//built-in strrev()
void nimps_strrev(char *s)
{
    char aux = '@';
    for(int i = 0, len = strlen(s) - 1 ; i < len; i++, len--)
    {
        aux=s[i];
        s[i] = s[len];
        s[len] = aux;
    }

    return;
} 

void fill_bin_str(char bin[MAX_NBYTE_SIZE])
{
    int i = 0;
    while(i < MAX_NBYTE_SIZE)
    {
        bin[i] = '0';
        i++;
    }
    bin[i] = '\0';
}

void 
get_bin_str(int n, char bin[MAX_NBYTE_SIZE])
{
    int valor = n;
    int i = 0;
    
    fill_bin_str(bin);

    while(valor > 0)
    {
        int tmp = valor % 2;
        if(tmp == 0)
            bin[i] = '0';
        else
            bin[i] = '1';

        valor /= 2;
        i++;
    }

    nimps_strrev(bin);
    return;
}

int main(void)
{
    uint32_t a = 0, b = 0;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        getchar();
        char bin_str_a[MAX_NBYTE_SIZE], bin_str_b[MAX_NBYTE_SIZE];
        get_bin_str(a, bin_str_a);
        get_bin_str(b, bin_str_b);
        printf("%s %s\n", bin_str_a, bin_str_b);
    }
    
    return 0;
}