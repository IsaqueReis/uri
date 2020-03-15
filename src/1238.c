#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_SIZE 50

void print_alternate(char s1[BUFF_SIZE+1], char s2[BUFF_SIZE+1])
{
    size_t total_size = strlen(s1) + strlen(s2);
    int alternate = 0;

    int k = 0, l = 0;
    for(int i = 0; i < total_size; i++)
    {
        if(alternate == 0 && s1[k] != '\0')
        {
            printf("%c", s1[k]);
            k++;
            alternate = 1;
        } else if(alternate == 1 && s2[l] != '\0') {
            printf("%c", s2[l]);
            l++;
            alternate = 0;
        } else if(strlen(s1) >= strlen(s2)) 
        {
            printf("%c", s1[k]);
            k++;
        } else {
            printf("%c", s2[l]);
            l++;
        }
    }

    printf("\n");
}


int main(void)
{
    int n = 0;
    char s1[50+1] = {'\0'}, s2[50+1] = {'\0'};

    scanf("%d", &n);
        getchar();

    while(n--)
    {
        scanf("%s %s", s1, s2);
            getchar();

        print_alternate(s1, s2);
    }

    return 0;
}