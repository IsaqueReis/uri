#include <stdio.h>
#include <math.h>


int main(void)
{double a, b, c; //coeficientes

    scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0)
    {
        puts("Impossivel calcular");
        return 0;
    }
    double delta = pow(b, 2) - 4 * a * c;
    //printf("%.5lf\n", delta);
    if(delta < 0) 
    {
        puts("Impossivel calcular");
        return 0;
    }
    double raiz = sqrt(delta);
    double minusB = b * (-1);
    double doubleA = 2 * a;

    double cimaP = minusB + raiz;
    double cimaS = minusB - raiz;
    double r1 = cimaP / doubleA;
    double r2 = cimaS / doubleA;


    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);

    return 0;
}