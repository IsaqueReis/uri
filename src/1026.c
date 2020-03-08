#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

#define MAX_NBYTE_SIZE 32

typedef unsigned long long ll;

char carry = '@';

char 
binary_sum(char a, char b)
{
    if(a == '0' && b == '0')      
        return '0';
    else if(a == '1' && b == '0') 
        return '1';
    else if(b == '1' && a == '0') 
        return '1';
    else if(a == '1' && b == '1')
    {
        carry = '1';
        return '0';
    }
}

void 
_strrev(char *s)
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

void 
get_bin_str(ll n, char bin[MAX_NBYTE_SIZE+1])
{
    ll value_copy = n;

    for(int i = 0; i < MAX_NBYTE_SIZE; i++)
    {
        int tmp = value_copy % 2;
        if(tmp == 0)
            bin[i] = '0';
        else 
            bin[i] = '1';

        value_copy /= 2;
    }
    _strrev(bin);
    //printf("%s\n", bin);
    return;
}

void perform_bin_sum(char a[MAX_NBYTE_SIZE+1], char b[MAX_NBYTE_SIZE+1], char out[MAX_NBYTE_SIZE+1])
{
    for(int i = 31; i >= 0; i--)
        out[i] = binary_sum(a[i], b[i]);
    //printf("%s\n", out);
    return;
}

int main(void)
{
    ll a = 0, b = 0;

    while(scanf("%llu %llu", &a, &b) != EOF)
    {
        getchar();
        //printf("%llu %llu\n", a, b);

        char bin_str_a[MAX_NBYTE_SIZE + 1] = {'\0'}, 
             bin_str_b[MAX_NBYTE_SIZE + 1] = {'\0'},
             out[MAX_NBYTE_SIZE + 1]       = {'\0'};
        get_bin_str(a, bin_str_a);
        get_bin_str(b, bin_str_b);
        perform_bin_sum(bin_str_a, bin_str_b, out);
        printf("%llu\n", (ll) strtoull(out, NULL, 2));
    }
    
    return 0;
}