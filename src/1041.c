#include <stdio.h>

int main(void)
{float x, y;
    scanf("%f %f", &x, &y);
    
    if(x == 0 && y == 0)
    {
        puts("Origem");
    } else if(x == 0)
    { if(y > 0 || y < 0)
        puts("Eixo Y");
    } else if(y == 0)
    { if(x > 0 || x < 0)
        puts("Eixo X");
    } else if(x > 0 && y > 0)
    {
        puts("Q1");

    } else if(x < 0 && y > 0)
    {
        puts("Q2");
    } else if(x <0 && y < 0)
    {
        puts("Q3");

    } else {
        puts("Q4");

    }

    return 0;
}