#include <stdio.h>

int main(void)
{float salario = 0.0;
 float ajuste = 0.0;
 float bonificacao = 0.0;

    scanf("%f", &salario);

    if(salario <= 400.0)
    {
        ajuste = 0.15;
        bonificacao = ajuste * salario;
        salario += bonificacao;
    } else if(salario > 400.0 && salario <= 800.0)
    {
        ajuste = 0.12;
        bonificacao = ajuste * salario;
        salario += bonificacao;
    } else if(salario > 800.0 && salario <= 1200.0)
    {
        ajuste = 0.10;
        bonificacao = ajuste * salario;
        salario += bonificacao;
    } else if(salario > 1200.0 && salario <= 2000.0)
    {
        ajuste = 0.07;
        bonificacao = ajuste * salario;
        salario += bonificacao;
    } else {
        ajuste = 0.04;
        bonificacao = ajuste * salario;
        salario += bonificacao;
    }
    
    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", bonificacao);
    printf("Em percentual: %.0f %%\n", (ajuste * 100));

    return 0;
}