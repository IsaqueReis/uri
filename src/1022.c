#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned long long ll;


ll gcd(ll a, ll b)
{    
    if (b == 0)
    {   
        return a; 
    } else {
       //printf("%llu ", b);
       return gcd(b, a % b);
    }
}


ll lcm(ll a, ll b)
{ll tmp = gcd(a, b);
    return (((a) * (b)) / (tmp));
}

/*
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
*/
int dark_math1(char op, int n1, int n2, int d1, int d2)
{
    int out = 0;
    int tmp = 0;
    switch(op)
    {
        case '+' : 
        {
            tmp = n1 * d2;
            out += tmp;
            tmp = n2 * d1;
            out += tmp;
            return out;
        }

        case '-' : 
        {
            tmp = n1 * d2;
            out += tmp;
            tmp = n2 * d1;
            out -= tmp;
            return out;
        }

        case '*' : 
        {
            tmp = n1 * n2;
            out += tmp;
            return out;
        }

        case '/' : 
        {
            tmp = n1 * d2;
            out += tmp;
            return out;
        }
    }
}

int dark_math2(char op, int n1, int n2, int d1, int d2)
{
    int out = 0;
    int tmp = 0;
    switch(op)
    {
        case '+' : 
        {
            tmp = d1 * d2;
            out += tmp;
            return out;
        }

        case '-' : 
        {
            tmp = d1 * d2;
            out += tmp;
            return out;
        }

        case '*' : 
        {
            tmp = d1 * d2;
            out += tmp;
            return out;
        }

        case '/' : 
        {
            tmp = n2 * d1;
            out += tmp;
            return out;
        }
    }
}

void simplify(int n, int d)
{
    int tmpn = n, tmpd = d;
    int factor = gcd(abs(tmpn), abs(tmpd));

    while(factor != 1)
    {
        tmpn /= factor;
        tmpd /= factor;
        factor = gcd(abs(tmpn), abs(tmpd));
    }

    printf("%d/%d = %d/%d\n", n, d, tmpn, tmpd);
    return;
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
        getchar();
    while(n--)
    {int n1 = 0, n2 = 0, d1 = 0, d2 = 0;
     char op = '@', tmp = '@', tmp2 = '@';

        scanf("%d %c %d %c %d %c %d", &n1, &tmp, &d1, &op, 
                                           &n2, &tmp2, &d2);
        getchar();
        int n = dark_math1(op, n1, n2, d1, d2);
        int d = dark_math2(op, n1, n2, d1, d2);
    
        if(gcd(n, d) <= 1)
            printf("%d/%d = %d/%d\n", n, d, n, d);
        else 
            simplify(n, d);
    }
    return 0;
}