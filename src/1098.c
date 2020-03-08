#include <stdio.h>

int main(void)
{int a = 0, b = 1;

    while(b < 4)
    {
        printf("I=%d J=%d\n", a, b);
        b++;
    }

 a = 0;
 b = 1;
 int fract = 2;
 int count = 0;
 int i = 0;
    while(i < 12)
    {
       printf("I=%d.%d J=%d.%d\n", a, fract, b, fract);
       count++; b++;

       if(count == 3)
       {
           fract += 2;
           b = 1;
           count = 0;
       }

       i++;
    }

 a = 1;
 b = 2;

 while(b < 5)
    {
        printf("I=%d J=%d\n", a, b);
        b++;
    }

 a = 1;
 b = 2;
 fract = 2;
 count = 0;
 i = 0;

 while(i < 12)
    {
       printf("I=%d.%d J=%d.%d\n", a, fract, b, fract);
       count++; b++;

       if(count == 3)
       {
           fract += 2;
           b = 2;
           count = 0;
       }

       i++;
    }

 a = 2;
 b = 3;
  while(b < 6)
    {
        printf("I=%d J=%d\n", a, b);
        b++;
    }

 
    return 0;
} 