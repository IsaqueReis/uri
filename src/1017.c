#include <stdio.h>

float calcDist(int vm, int t)
{
    return vm * t;
}

float calcLitros(float dist)
{
    return dist / 12.0;
}

int main(void)
{int vm, t;
    scanf("%d", &t);
    scanf("%d", &vm);
    
    float tmp = calcDist(vm, t);
    
    printf("%.3f\n", calcLitros(tmp));
    return 0;
}