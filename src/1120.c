#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>


#define MAX_BUFF_SIZE 4098
#define OK                                                                    0
#define NO_INPUT                                                              1
#define TOO_LONG                                                              2
typedef int32_t myint;
myint getUserInput(char *prmpt, char *buff, size_t sz)
{int ch, extra;

    // Get line with buffer overrun protection.
    if (prmpt != NULL) {
        printf ("%s", prmpt);
        fflush (stdout);
    }
    if (fgets (buff, sz, stdin) == NULL)
        return NO_INPUT;

    // If it was too long, there'll be no newline. In that case, we flush
    // to end of line so that excess doesn't affect the next call.
    if (buff[strlen(buff)-1] != '\n') {
        extra = 0;
        while (((ch = getchar()) != '\n') && (ch != EOF))
            extra = 1; 
        return (extra == 1) ? TOO_LONG : OK;
    }

    // Otherwise remove newline and give string back to caller.
    buff[strlen(buff)-1] = '\0';
    return OK;
}

char *strdelc(char *s, char ch)
{int i, j;
    for(i=j=0; s[i] != '\0'; i++)
        if(s[i] != ch)
            s[j++] = s[i];
    s[j] = '\0';

    return s;
}

/*Como o número de casos de teste não é conhecido a priori, não é possível determinar um limite para o número de iterações. Uma forma comum de tratar esse tipo de problema é ter um loop infinito, 
e um teste dentro do loop que verifica a condição de parada. Por exemplo, no caso do f91,
 poderíamos ler a entrada da seguinte forma:*/

int main(int argc, char **argv)
{char test[MAX_BUFF_SIZE], *testi;
 char *out;
 char ch;
    
while(true)
 {
     myint user_input = getUserInput("", test, 
                                     sizeof(test));
     switch(user_input)
     {
         case NO_INPUT : puts("nenhuma expressao inserida!"); return 0; break;
         case TOO_LONG : printf("expressao muito longa(max:%d caracteres!)\n", 
                                      MAX_BUFF_SIZE);         return 0; break;
         case OK       :                                                break;
         default       :                                      return 0; break;                    
     }

     //expression
     testi = (char*) mycalloc(strlen(test)+1);
     if(!expression)
     {
         puts("allocation error!");
         return 0;
     } else {
         strcpy(testi, test);
         //printf("%s, copia: %s\n", ptr_expression, expression);
     } 

     //converter para minusculas
     if(!strcmp("0", expression)){break;}
     
     /*salvar string expression antes da destruiçao da integridade
      da mesma*/
     char *expression_two = str_sec_cpy(expression);
        myint test = strcmp(ptr_expression, expression_two);
             if(test != 0) 
                {
                    puts("erro ao salvar a string de entrada do usuario!");
                    return 0;
                }
    
    return 0;
}