#include <stdio.h>


int main(void)
{
  float x = 0.0;
  float y = 0.0;
  float z = 0.0;

  scanf("%f %f %f", &x, &y, &z);

  if (x < y + z && y < x + z && z < x + y) 
  {
      printf("Perimetro = %.1f\n", (x+y+z));
  } else {
      float tmp = (x + y);
      float area = (tmp * z) / 2;
      printf("Area = %1.f\n", area);
  }
    return 0;
}