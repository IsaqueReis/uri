#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned long long ll;

void strcpyn(int len, char *dest, char *src)
{int i = 0;
    for(i; i < len; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

int main(void)
{ll n = 0,  m = 0;
 ll k = 1;
 int i = 0;
 char key[500];
 bool validate = true;
    scanf("%llu %llu", &n, &m);
        //printf("%llu %llu", n, m);
        sprintf(key, "%llu", n);
        
        char fst[500]; 
        while(validate == true)
        {ll add = m * k;
         char local[500];
            sprintf(local, "%llu", add);

            if(strstr(local, key) != NULL)
            {
                strcpy(fst, local);
                validate = false;
                break;
            }
            k++;
            i++;
        }
        printf("%s\n", fst);
/*
  char str[] ="123456";
  const char key[] = "234";
  char *pch;
  char *test;
  pch = strstr (str, key);
  strncpy(test, pch, 3);

  puts(test);
  puts (str);
  */
    return 0;
}