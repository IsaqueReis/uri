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

        for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < colunas; j++)
                if(arena[i][j] == 'N' ||
                   arena[i][j] == 'S' ||
                   arena[i][j] == 'L' ||
                   arena[i][j] == 'O')
                {
                    x = i;
                    y = j;
                    orientacao = arena[i][j];
                }
        }
        switch(orientacao)
        {
            case 'N': arena[x][y] = '1'; break;
            case 'S': arena[x][y] = '2'; break;
            case 'L': arena[x][y] = '3'; break;
            case 'O': arena[x][y] = '4'; break;
            default : break;
        }
        
        //printf("o robo esta virado para %c\n", orientacao);

        //printf("vai executar %d instrucoes\n", instrucoes);
        for(int i = 0; i < instrucoes; i++)
        {//printf("instrucao %d\n", i);
            if(comandos[i] == 'D' || comandos[i] == 'E')
            {//printf("é um comando de rotacao, [%c]\n", comandos[i]);

                if(arena[x][y] == '1' && comandos[i] == 'D')
                {   
                    arena[x][y] = '3';
                    orientacao = '3';
                    //puts("voltou-se para leste");
                    continue;
                }
                if(arena[x][y] == '1' && comandos[i] == 'E')
                {    
                    arena[x][y] = '4';
                    orientacao = '4';
                    //puts("voltou-se para oeste");
                    continue;
                }

                if(arena[x][y] == '2' && comandos[i] == 'D')
                {    
                    arena[x][y] = '4';
                    orientacao = '4';
                    //puts("voltou-se para oeste");
                    continue;
                }
                if(arena[x][y] == '2' && comandos[i] == 'E')
                {    
                    arena[x][y] = '3';
                    orientacao = '3';
                    //puts("voltou-se para leste");
                    continue;
                }
                
                if(arena[x][y] == '3' && comandos[i] == 'D')
                {   
                     arena[x][y] = '2';
                     orientacao = '2';
                     //puts("voltou-se para sul");
                     continue;
                }
                if(arena[x][y] == '3' && comandos[i] == 'E')
                {   
                     arena[x][y] = '1';
                     orientacao = '1';
                     //puts("voltou-se para norte");
                     continue;
                }

                if(arena[x][y] == '4' && comandos[i] == 'D')
                {  
                     arena[x][y] = '1';
                     orientacao = '1';
                     //puts("voltou-se para norte");
                     continue;
                }
                if(arena[x][y] == '4' && comandos[i] == 'E')
                {    
                    arena[x][y] = '2';
                    orientacao = '2';
                    //puts("voltou-se para sul");
                    continue;
                }

            } else {
                
                if(orientacao == '1')
                { //puts("comando de movimento a norte");
                    if(arena[x-1][y] == '#')
                    {
                        //puts("pilastra a norte");
                        continue;
                    } else if(arena[x-1][y] == '*') {
                        //puts("carta a norte");
                        contador++;
                        //puts("coletou a carta");
                        x = x - 1;
                        //puts("moveu-se ate la");
                        arena[x-1][y] = '.';
                        //puts("tirou a carta");
                        continue;
                    } else {
                        x = x-1;
                        //puts("movimentou-se normalmente");
                        continue;
                    }
                }

                if(orientacao == '2')
                {//puts("comando de movimento a sul");
                    if(arena[x+1][y] == '#')
                    {
                        //puts("pilastra a sul");
                        continue;
                    } else if(arena[x+1][y] == '*') {
                        //puts("carta a sul");
                        contador++;
                        //puts("coletou a carta");
                        x = x+1;
                        //puts("moveu-se ate la");
                        arena[x+1][y] = '.';
                        //puts("tirou a carta");
                        continue;
                    } else {
                        x = x+1;
                        //puts("movimentou-se normalmente");
                        continue;
                    }
                }

                if(orientacao == '3')
                {//puts("comando de movimento a leste");
                    if(arena[x][y+1] == '#')
                    {
                        //puts("pilastra a leste");
                        continue;
                    } else if(arena[x][y+1] == '*') {
                       // puts("carta a lest");
                        contador++;
                        //puts("coletou a carta");
                        y = y+1;
                        //puts("moveu-se ate la");
                        arena[x][y+1] = '.';
                        //puts("tirou a carta");
                        continue;
                    } else {
                        y = y+1;
                        //puts("movimentou-se normalmente");
                        continue;
                    }
                }

                if(orientacao == '4')
                {//puts("comando de movimento a oeste");
                    if(arena[x][y-1] == '#')
                    {
                        //puts("pilastra a oest");
                        continue;
                    } else if(arena[x][y-1] == '*') {
                        //puts("carta a leste");
                        contador++;
                        //puts("coletou a carta");
                        y = y-1;
                        //puts("moveu-se ate la");
                        arena[x][y-1] = '.';
                        //puts("tirou a carta");
                        continue;
                    } else {
                        y = y-1;
                        //puts("movimentou-se normalmente");
                        continue;
                    }
                }

            }
        }
    
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