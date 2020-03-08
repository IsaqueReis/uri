#include <stdio.h>

#define calcMedia(a,b,c,d) ((((a)*(2))+((b)*(3))+((c)*(4))+((d)*(1))) / (10))

int main(void)
{float n, n1, n2, n3;
    scanf("%f %f %f %f", &n, &n1, 
                        &n2, &n3);

    float media = calcMedia(n,n1,n2,n3);
    if(media >= 7.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        return 0;
    } else if(media < 5.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
        return 0;
    } else if(media >= 5.0 && media <= 6.9)
    {float tmp;
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf(" %f", &tmp);
        printf("Nota do exame: %.1f\n", tmp);
        float novaMedia = (media + tmp) / 2;
        if(novaMedia >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", novaMedia);
            return 0;
        } else if(novaMedia <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", novaMedia);
            return 0;
        }
        
    }
    return 0;
}