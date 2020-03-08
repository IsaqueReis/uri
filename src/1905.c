#include <stdio.h>
#include <stdbool.h>

#define DIM 4

void print(int mtz[DIM][DIM])
{
    for(int i = 0; i < DIM; i++)
    {
        for(int j = 0; j < DIM; j++)
        {
            printf("%d ", mtz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

bool acharCaminho(int x, int y, int mtz[DIM][DIM], int sol[DIM][DIM])
{
    if(x < 0 || x > DIM-1) //se estiver fora dos limites
        return false;

    if(y < 0 || y > DIM-1) //se estiver fora dos limites
        return false;

    if(mtz[y][x] == 0)    //se for um obstaculo
        return false;
    
    if(x == DIM-1 && y == DIM-1)  //ENCONTREI A SAIDA
    {    
        sol[x][y] = 1;
        return true;
    }

    sol[y][x] = 1;        //ok, caminho me leva a uma possivel solução

    if(acharCaminho(x+1, y, mtz, sol) == true)  //andar para direita(frente)
        return true;

    if(acharCaminho(x, y+1, mtz, sol) == true) //andar para baixo
        return true;

    sol[x][y] = 0; //backtracking         //se não satisfazer nenhuma das acima, marque como zero e recomeçe
    return false;
}

bool begin(int mtz[DIM][DIM])
{
    int sol[DIM][DIM] = {0};
    if(acharCaminho(0,0,mtz, sol) == false)
        return false;
        
    print(sol);
    return true;
}


int main(void)
{int casos = 0;
    scanf("%d", &casos);
    for(int k = 0; k < casos; k++)
    {int labirinto[DIM][DIM] = {0};
        for(int i = 0; i < DIM; i++)
        {
            for(int j = 0; j < DIM; j++)
            {
                scanf(" %d", &labirinto[i][j]);
            }
        }

        bool test = begin(labirinto);
    }

    return 0;
}