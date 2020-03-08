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
        
        for(int i = 0; i < instrucoes; i++)
        {
            switch(comandos[i])
            {
                case 'D' : //se for um movimento a direita
                {
                    switch(orientacao)
                    {
                        case 'N' : orientacao = 'L'; break;
                        case 'L' : orientacao = 'S'; break;
                        case 'S' : orientacao = 'O'; break;
                        case 'O' : orientacao = 'N'; break;
                    }//switch(orientacao)
                    break;
                }//case 'D'

                case 'E' : //se for um movimento a esquerda
                {
                    switch(orientacao)
                    {
                        case 'N' : orientacao = 'O'; break;
                        case 'O' : orientacao = 'S'; break;
                        case 'S' : orientacao = 'L'; break;
                        case 'L' : orientacao = 'N'; break;
                    }//switch(orientacao)
                    break;
                }//case 'E'

                case 'F' : //se for um comando de avanço
                {
                    switch(orientacao)
                    {
                        case 'N' : 
                        {
                            x--;
                            if(arena[x][y] == '#' || x < 0 && y < 0 || x < 0 || y < 0 ||
                               x > linhas-1 )
                                x++;
                            
                            if(arena[x][y] == '*')
                                contador++;

                        }//case 'N'

                        case 'L' : 
                        {
                            y++;
                        }//case 'L'

                        case 'S' :
                        {
                            x++;
                        }//case 'S'

                        case 'O' : 
                        {
                            y--;
                        }//case 'O'
                    }//switch(orientacao)
                    break;
                }//case 'F'
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