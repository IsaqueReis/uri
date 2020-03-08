#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_BUFF                                                           1001
#define MAX_TEST                                                          10000

char *deslocaTres(char *s)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(islower(s[i]) != 0 || isupper(s[i]) != 0)
        {char tmp = s[i];
            s[i] = tmp + 3;
        }
    }
    return s;
}

char *truncate(char *s)
{int len = strlen(s);
 int i = 0;
    for(i; i <= len / 2; i++)
    {}

    for(int j = i; s[j] != '\0'; j++)
    {char tmp = s[j];
        s[j] = tmp - 1;
    }
    return s;
}
char *reverse(char *s)
{int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}

int main(void)
{char in[MAX_BUFF];
 int n_test = 0;
 int i = 0;
 
 while(1)
 { 
     scanf("%d\n", & n_test);
     scanf("%[^\n]", in);

     if(i == n_test)
     {
         break;
     }
     i++;
     deslocaTres(in);
     reverse(in);
     truncate(in);

     printf("%s\n",in);

     fflush(stdin);
 }
    printf("\n");
    return 0;
}