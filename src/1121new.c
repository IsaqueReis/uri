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
    }

    
    return 0;
}