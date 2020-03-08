#include <stdio.h>


int main(void)
{int validator = 0;
 int inter = 0, gremio = 0;
 int n_vitorias_inter = 0;
 int n_vitorias_gremio = 0;
 int n_empates = 0;
 int i = 0; //iteracoes

    do
    {int tmp = 0; //armazena valor qualquer
        scanf("%d %d", &inter, &gremio);
        if(inter > gremio)
        {
            n_vitorias_inter++;
        } else if(gremio > inter)
        {
            n_vitorias_gremio++;
        } else {
            n_empates++;
        }
        i++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &tmp);

        if(tmp == 1)
        {
            continue;
        } else {
            validator = 2;
        }
    
    } while (validator != 2);
    
    printf("%d grenais\n", i);
    printf("Inter:%d\n", n_vitorias_inter);
    printf("Gremio:%d\n", n_vitorias_gremio);
    printf("Empates:%d\n", n_empates);
    if(inter == gremio) 
    {
        printf("Nao houve vencedor\n");
    } else {
        printf("%s\n", ((inter) > (gremio)) ? ("Inter venceu mais") : ("Gremio venceu mais"));
    }
    
    return 0;
}