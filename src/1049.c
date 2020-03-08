#include <stdio.h>
#include <string.h>

#define MAX 24

int main(void)
{char tipo[MAX], subtipo[MAX], subsubtipo[MAX];
    scanf("%s", tipo);
    scanf(" %s", subtipo);
    scanf(" %s", subsubtipo);

    if(strcmp(tipo,"vertebrado") == 0 && strcmp(subtipo, "ave") == 0 
       && strcmp(subsubtipo, "carnivoro") == 0)
    {
        printf("aguia\n");
    }

    if(strcmp(tipo,"vertebrado") == 0 && strcmp(subtipo, "ave") == 0 
       && strcmp(subsubtipo, "onivoro") == 0)
    {
        printf("pomba\n");
    }

    if(strcmp(tipo,"vertebrado") == 0 && strcmp(subtipo, "mamifero") == 0 
       && strcmp(subsubtipo, "onivoro") == 0)
    {
        printf("homem\n");
    }

    if(strcmp(tipo,"vertebrado") == 0 && strcmp(subtipo, "mamifero") == 0 
       && strcmp(subsubtipo, "herbivoro") == 0)
    {
        printf("vaca\n");
    }

    if(strcmp(tipo,"invertebrado") == 0 && strcmp(subtipo, "inseto") == 0 
       && strcmp(subsubtipo, "hematofago") == 0)
    {
        printf("pulga\n");
    }

    
    if(strcmp(tipo,"invertebrado") == 0 && strcmp(subtipo, "inseto") == 0 
       && strcmp(subsubtipo, "herbivoro") == 0)
    {
        printf("lagarta\n");
    }

    if(strcmp(tipo,"invertebrado") == 0 && strcmp(subtipo, "anelideo") == 0 
       && strcmp(subsubtipo, "hematofago") == 0)
    {
        printf("sanguessuga\n");
    }

    if(strcmp(tipo,"invertebrado") == 0 && strcmp(subtipo, "anelideo") == 0 
       && strcmp(subsubtipo, "onivoro") == 0)
    {
        printf("minhoca\n");
    }



    //printf("%s %s %s\n", tipo, subtipo, subsubtipo);

}