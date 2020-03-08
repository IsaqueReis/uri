#include <stdio.h>

int main(void)
{float salario = 0.0;
 float tarifa = 0.0;
 float imposto = 0.0;

    scanf("%f", &salario);

    if(salario <= 2000.0)
    {
    	tarifa = 0.0;
        imposto = salario * tarifa;
    } else if(salario > 2000.0 && salario <= 3000.00)
    {
        tarifa = 0.08;
        salario -= 2000.0;
        imposto += tarifa * salario;
    } else if(salario > 3000.00 && salario <= 4500.00)
    {
        tarifa = 0.08;
        imposto += ((tarifa) * (1000.0));
        tarifa = 0.18;
        salario -= 3000.0;
        imposto += tarifa * salario;
    } else {
        tarifa = 0.08;
        imposto += ((tarifa) * (1000.0));
        tarifa = 0.18;
        imposto += ((tarifa) * (1500.0));
        tarifa = 0.28;
        salario -= 4500.0;
        imposto += tarifa * salario;
    }
    
    if(imposto > 0.0)
    {    
        printf("R$ %.2f\n", imposto);
    } else {
        puts("Isento");
    } 
    
    return 0;
}