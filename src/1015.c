#include <stdio.h>
#include <math.h>

/*https://youtu.be/FQhobzqnfy0*/
float distXY (float x1, float y1, 
              float x2, float y2)
{float tmp =  (x2 - x1) * (x2 - x1);
 float tmp2 = (y2 - y1) * (y2 - y1);

    return sqrt(tmp + tmp2);
}      

int main(void)
{float x1, y1, 
       x2, y2;

        scanf("%f %f", &x1, &y1);
        scanf(" %f %f", &x2, &y2);

        printf("%.4f\n", distXY(x1, y1, x2, y2));
    return 0;
}