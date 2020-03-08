#include <stdio.h>
#include <string.h>


int numOfOcourrencies(char *string, char *substring)
{int sub_length = strlen(substring);
 int j = 0;
 int contador = 0;
    for(int i = 0; string[i] != '\0';i++)
    {
        if(string[i] == substring[j])
        
    }

    return contador;
}

int main(void)
{char    string[33];
 char substring[11];

    while(fscanf(stdin, "%s %s", &substring, &string) != EOF)
    {
        printf("%d\n", numOfOcourrencies(string, substring));

    }
    
    return 0;
}