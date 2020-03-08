#include <stdio.h>


int main(void)
{int fstH = 0,  lstH = 0;
 int fstM = 0,  lstM = 0;
	scanf("%d %d %d %d", &fstH, &fstM, &lstH, &lstM);
    
    int horas = 0;
    
	if(fstH > lstH)
	{int tmp = 24 - fstH;
        horas = tmp + lstH;
	} else if(fstH < lstH) {
        horas = lstH - fstH;
	} else {
        horas = 24;
	}

    int minutos = 0;
    
    if(fstM > lstM)
    {int tmp = 60 - ((-1) * (lstM - fstM));
        minutos = tmp;
        horas--;
    } else if(fstM == lstM)
    {
        minutos = 0;
    } else {
        minutos = lstM - fstM;
    }

    if(horas == 24 && minutos > 0)
    {
        horas = 0;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}