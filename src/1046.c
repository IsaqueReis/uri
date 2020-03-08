#include <stdio.h>


int main(void)
{int fstH = 0,  lstH = 0;
	scanf("%d %d", &fstH, &lstH);

	if(fstH > lstH)
	{int tmp = 24 - fstH;
		printf("O JOGO DUROU %d HORA(S)\n", (tmp + lstH));
	} else if(fstH < lstH) {
		printf("O JOGO DUROU %d HORA(S)\n", (lstH - fstH));
	} else {
		printf("O JOGO DUROU %d HORA(S)\n", 24);
	}
    return 0;
}