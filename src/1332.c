#include <stdio.h>
#include <string.h>

char dicitionary[] = "two";

int whatNumber(char *s)
{
    if(strlen(s) == 3)
    {
        if(s[1] == 'w' && s[2] == 'o' ||
           s[0] == 't' && s[2] == 'o' || 
           s[0] == 't' && s[1] == 'w')
        {
            return 2;
        } else {
            return 1;
        }
    } else {
        return 3;
    }
}

int main(void)
{int n_testes = 0;
 int i = 0;
 char word[5+1];
    scanf("%d", &n_testes);
    while(i < n_testes)
    {
        scanf("%s", word);
        
        int number = whatNumber(word);
    
        printf("%d\n", number);
        i++;
    }
        
    return 0;
}