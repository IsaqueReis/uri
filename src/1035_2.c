/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for
maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, 
forem positivos e se a variável A for par escrever a
mensagem "Valores aceitos", senão escrever "Valores nao aceitos".*/


#include <stdio.h>
#include <stdbool.h>

bool verificaMaior(int a, int b)
{bool tmp = true;
    if(a > b)
    {
        return tmp;
    }
    tmp = false;
    return tmp;
}

bool verificaSum(int a, int a1, int b, int b1)
{int tmp = a+a1;
 int tmp2 = b+b1;
 bool out = true;
 
    if(tmp > tmp2)
    {
        return out;
    }
    out = false;
    return out;
}

bool verificaPositivo(int n)
{bool tmp = true;
    if(n >= 0)
    {
        return tmp;
    }
    tmp = false;
    return tmp;
}

bool verificaPar(int n)
{bool tmp = true;
    if(n % 2 == 0)
    {
        return tmp;
    }
    
    tmp = false;
    return tmp;
}

int main(void)
{int a, b, c, d;
 bool teste1, teste2, teste3, teste4, teste5, teste6;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    teste1 = verificaMaior(b, c); printf("%s\n", teste1 == true ?  "sim" : "nao");
    teste2 = verificaMaior(d, a); printf("%s\n", teste2 == true ?  "sim" : "nao");
    teste3 = verificaSum(c, d, a, b); printf("%s\n", teste3 == true ? "sim" : "nao");
    teste4 = verificaPositivo(c); printf("%s\n", teste4 == true ? "sim" : "nao");
    teste5 = verificaPositivo(d); printf("%s\n", teste5 == true ? "sim" : "nao");
    teste6 = verificaPar(a); printf("%s\n", teste6 == true ? "sim" : "nao");
    
    
    return 0;
}