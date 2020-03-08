#include <stdio.h>

char *strdelc(char *s, char ch)
{int i, j;
    for(i=j=0; s[i] != '\0'; i++)
        if(s[i] != ch)
            s[j++] = s[i];
    s[j] = '\0';

    return s;
}


int main(void)
{long m = 0, n = 0;
 char tmp[1000+1];
    while(scanf("%ld %ld", &m, &n) == 2 && m != 0 && n != 0)
    {long sum = ((m) + (n));
        sprintf(tmp, "%ld", sum);
        strdelc(tmp, '0');
        printf("%s\n", tmp);
    }
    return 0;
}
