#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DLIM ".-"
#define mycalloc(n)                                               (calloc(1,n))


char **splitStr(char *s)
{int bufsize = 64, position = 0;
    
    char **tokens = mycalloc(bufsize * sizeof(char*));
    char *token;

    if(!tokens)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }

    token = strtok(s, DLIM);
    while(token != NULL)
    {
        tokens[position] = token;
        position++;
        if(position >= bufsize)
        {
            bufsize += 64;
            tokens = realloc(tokens, bufsize * sizeof(char*));
            if(!tokens)
            {
               fprintf(stderr, "error\n");
               exit(1); 
            }
        }

        token = strtok(NULL, DLIM);
    }
    tokens[position] = NULL;
    return tokens;
}

int main(void)
{char **tokens;
 char *in;
  scanf("%s", in);
  
        tokens = splitStr(in);

        for(int i = 0; tokens[i]!= NULL; i++)
        {
            printf("%s\n", tokens[i]);
        }

    fflush(stdin);
 
    return 0;
}