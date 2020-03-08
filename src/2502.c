#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char s[1000+1];
} FRASE;

void print(int len, FRASE f[len])
{
    for(int i = 0; i < len; i++)
        printf("%s\n", f[i].s);
}

int isdifferent(char c)
{
    if(c >= 32 && c <= 47  ||
       c >= 58 && c <= 100 ||
       c >= 91 && c <= 96  || 
       c >= 123 && c <= 126) 
        return 1;
    return 0;
}

void aplicaRegra(char cifra, char subCifra, char *s)
{char lwCifra =  '@';
 char lwSCifra = '@';
    if(isalnum(cifra) && isalnum(subCifra) || isdifferent(cifra) || isdifferent(subCifra))
    {   
        lwCifra = tolower(cifra);
        lwSCifra = tolower(subCifra);
    }
    
    //printf("%c %c\n", lwCifra, lwSCifra);
    //printf("%c %c\n", cifra, subCifra);
    for(int i = 0; s[i] != '\0'; i++)
    {
        
        if(islower(s[i]) || isalnum(s[i]) || isdifferent(s[i]))
        {
            if(s[i] == lwCifra)
            {    
                s[i] = lwSCifra;
                continue;
            }
            if(s[i] == lwSCifra)
            {   
                s[i] = lwCifra;
                continue;
            }
        }
        
        if(s[i] == cifra)
        {    
            s[i] = subCifra;
            continue;
        }
        if(s[i] == subCifra)
        {    
            s[i] = cifra;
            continue;
        }
    }//for
    return;
}

void decifraFrase(int len, char cifra[], char subCifra[], char *s)
{
    for(int i = 0; i < len; i++)
    {
        aplicaRegra(cifra[i], subCifra[i], s);
    }
}

void decifraTudo(int total, int lenCifra, char cifra[], 
                       char subCifra[], FRASE f[total])
{
    for(int i = 0; i < total; i++)
        decifraFrase(lenCifra, cifra, subCifra, f[i].s);
}

int main(void)
{int lenCifra = 0; 
 int nFrases = 0;
    while(scanf("%d %d", &lenCifra, &nFrases) != EOF)
    {char cifra[lenCifra];
     char subCifra[lenCifra];
     FRASE f[nFrases];
            scanf(" %[^\n]",cifra);
            scanf(" %[^\n]",subCifra);
            int i = 0;
            while(i < nFrases)
            {
                scanf(" %[^\n]", &f[i].s);
                printf("%s\n", f[i].s);
                i++;
            }
        //decifraTudo(nFrases, lenCifra, cifra, subCifra, f);
        //print(nFrases, f);
        //printf("\n");
    }
    return 0;
}