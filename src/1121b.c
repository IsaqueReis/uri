#include <stdio.h>


void printArena(int lines, int rows, char arena[][rows])
{
  for(int i = 0; i < lines; i++)
  {
    for(int j = 0; j < rows; j++)
      printf("%c", arena[i][j]);
    printf("\n");
  }

  return;
}

int movRobo(int instrucoes, char comandos[instrucoes], 
             int linhas, int colunas, char arena[][colunas])
{int x = 0, y = 0;
 char orientacao = '@';
 int contador = 0;
 
        /*pega a primeira orientacao*/
        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
            {
                if(arena[i][j] == '.' || arena[i][j] == '*' ||
                   arena[i][j] == '#')
                {
                    continue;
                } else {
                    x = i;
                    y = j;
                    orientacao = arena[i][j];
                }
            }//for j
        }//for i
        
        //printf("x:%d y:%d o:%c\n", x, y, orientacao);
        /*executar comandos*/
        for(int i = 0; i < instrucoes; i++)
        {
            switch(comandos[i])
            {
                case 'D' : //se for um movimento a direita
                {
                    if(orientacao == 'N')
                    {
                        orientacao = 'L';
                    } else if(orientacao == 'L')
                    {
                        orientacao = 'S';
                    } else if(orientacao == 'S')
                    {
                        orientacao = 'O';
                    } else if(orientacao == 'O')
                    {
                        orientacao = 'N';
                    } else {}

                    //printArena(linhas, colunas, arena);
                    break;
                }

                case 'E' : //se for um movimento a esquerda
                {
                    if(orientacao == 'N')
                    {
                        orientacao = 'O';
                    } else if(orientacao == 'O')
                    {
                        orientacao = 'S';
                    } else if(orientacao == 'S')
                    {
                        orientacao = 'L';
                    } else if(orientacao == 'L')
                    {
                        orientacao = 'N';
                    } else {}
                    //printArena(linhas, colunas, arena);
                    break;
                }

                case 'F' : //se for um comando de movimento
                {
                        switch(orientacao)
                        {
                            case 'N' : //se for um comando para norte
                            {int tmpX = x - 1; //simular movimento
                             int tmpY = y;
                             int limiteX = linhas - 1;
                             int limiteY = colunas - 1;
                                
                                if(tmpX < 0 && tmpY < 0) // fora da area 
                                    break;
                                if(tmpX < 0 || tmpY < 0) //fora da area
                                    break;
                                if(tmpX > limiteX && tmpY > limiteY) //fora da area
                                    break;
                                if(tmpX > limiteX || tmpY > limiteY) //fora da area
                                    break;

                                if(arena[x-1][y] == '.') //se for um espaco livre
                                    x--;
                                if(arena[x-1][y] == '#') //se for uma pilastra
                                    break;
                                if(arena[x-1][y] == '*') //se for uma figurinha
                                {
                                    x--;//vá ate la
                                    contador++; //colete
                                    arena[x][y] = '.'; //tire a figurinha
                                }
                                //printArena(linhas, colunas, arena);
                                break;
                            }

                            case 'S' : //se for um comando para sul
                            {int tmpX = x + 1; //simular movimento
                             int tmpY = y;
                             int limiteX = linhas - 1;
                             int limiteY = colunas - 1;
                                
                                if(tmpX < 0 && tmpY < 0) // fora da area 
                                    break;
                                if(tmpX < 0 || tmpY < 0) //fora da area
                                    break;
                                if(tmpX > limiteX && tmpY > limiteY) //fora da area
                                    break;
                                if(tmpX > limiteX || tmpY > limiteY) //fora da area
                                    break;
                                if(arena[x+1][y] == '.') //se for um espaco livre
                                    x++;
                                if(arena[x+1][y] == '#') //se for uma pilastra
                                    break;
                                if(arena[x+1][y] == '*') //se for uma figurinha
                                {
                                    x++;//vá ate la
                                    contador++; //colete
                                    arena[x][y] = '.'; //tire a figurinha
                                }
                                //printArena(linhas, colunas, arena);
                                break;
                            }

                            case 'O' : //se for um comando para oeste
                            {int tmpX = x;
                             int tmpY = y-1; //simular movimento
                             int limiteX = linhas - 1;
                             int limiteY = colunas - 1;

                                if(tmpX < 0 && tmpY < 0) // fora da area 
                                    break;
                                if(tmpX < 0 || tmpY < 0) //fora da area
                                    break;
                                if(tmpX > limiteX && tmpY > limiteY) //fora da area
                                    break;
                                if(tmpX > limiteX || tmpY > limiteY) //fora da area
                                    break;
                                if(arena[x][y-1] == '.') //se for um espaco livre
                                    y--;
                                if(arena[x][y-1] == '#') //se for uma pilastra
                                    break;
                                if(arena[x][y-1] == '*') //se for uma figurinha
                                {
                                    y--;//vá ate la
                                    contador++; //colete
                                    arena[x][y] = '.'; //tire a figurinha
                                }
                                //printArena(linhas, colunas, arena);
                                break;
                            }

                            case 'L' : //se for um comando para leste
                            {int tmpX = x;
                             int tmpY = y+1; //simular movimento
                             int limiteX = linhas - 1;
                             int limiteY = colunas - 1;

                                if(tmpX < 0 && tmpY < 0) // fora da area 
                                    break;
                                if(tmpX < 0 || tmpY < 0) //fora da area
                                    break;
                                if(tmpX > limiteX && tmpY > limiteY) //fora da area
                                    break;
                                if(tmpX > limiteX || tmpY > limiteY) //fora da area
                                    break;
                                if(arena[x][y+1] == '.') //se for um espaco livre
                                    y++;
                                if(arena[x][y+1] == '#') //se for uma pilastra
                                    break;
                                if(arena[x][y+1] == '*') //se for uma figurinha
                                {
                                    y++;//vá ate la
                                    contador++; //colete
                                    arena[x][y] = '.'; //tire a figurinha
                                }
                                //printArena(linhas, colunas, arena);
                                break;
                            }
                        }//switch(orientacao)
                    break;
                }//case F
                
            }//switch(comandos[i])
        }//for

        
    return contador;
}

int main(void)
{int linhas = 0, colunas = 0, instrucoes = 0;
    while(scanf("%d %d %d", &linhas, &colunas, &instrucoes) == 3 && 
          linhas != 0 && colunas != 0)
    {char arena[linhas][colunas];
     char comandos[instrucoes];
        
        /*lê a arena*/
        for(int i = 0; i < linhas; i++)
            for(int j = 0; j < colunas; j++)
                scanf(" %c", &arena[i][j]);
        
        
        /*lê os comandos*/
        fflush(stdin);
        for(int i = 0; i < instrucoes; i++)
            scanf(" %c", &comandos[i]);

        int cartas = movRobo(instrucoes, comandos, linhas, colunas, arena);
        printf("%d\n", cartas);
        
    }
    return 0;
}