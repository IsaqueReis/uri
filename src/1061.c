#include <stdio.h>

int main(void)
{char dia[3];
 char ch = '@';
 int fstD = 0, lstD = 0;
 int fstH = 0, lstH = 0;
 int fstM = 0, lstM = 0;
 int fstS = 0, lstS = 0;

    scanf("%s %d", dia, &fstD);
    scanf(" %d %c %d %c %d", &fstH, &ch, &fstM, &ch, &fstS);

    
    scanf("%s %d", dia, &lstD);
    scanf(" %d %c %d %c %d", &lstH, &ch, &lstM, &ch, &lstS);
    
    int dias = lstD - fstD;

    int horas = 0;

    if(fstH > lstH)
	{int tmp = 24 - fstH;
        horas = tmp + lstH;
        dias--;
	} else if(fstH < lstH) {
        horas = lstH - fstH;
	} else {
        horas = 0;
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

    


    int segundos = 0;

    if(fstS > lstS)
    {int tmp = 60 - ((-1) * (lstS - fstS));
        segundos = tmp;
        minutos--;
    } else if(fstS == lstS)
    {
        segundos = 0;
    } else {
        segundos = lstS - fstS;
    }
    
    if(minutos == 60 && segundos > 0)
    {
        segundos = 0;
    }
    
    if(minutos < 0 && segundos < 60)
    {
        minutos = 60 - ((-1) * minutos);
        horas--;
    }
    
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}