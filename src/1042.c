#include <stdio.h>
#include <string.h>


int main(void)
{int count = 0;
    //scanf("%d %d %d", &a, &b, &c);
    char sort[] = "TESTEORDENACAO";
    //int ghostSort[] = {a, b, c};
 
    int i = i;
    while (i < strlen(sort))
    {int j = i;
        while(j > 0 && sort[j - 1] > sort[j])
        {int tmp = sort[j];
            sort[j] = sort[j-1];
            sort[j-1] = tmp;
            j--;
        }
        i++;
    }
    /* 
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", sort[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", ghostSort[i]);
    }*/

    printf("%d\n", i);

    return 0;
}