#include <stdio.h>
#include <stdbool.h>

void printArr(int len, bool v[])
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void printArrd(int len, int v[])
{
    for(int i = 0; i < len; i++)
        printf("%d ", v[i]);
    printf("\n");
}

bool temElementos(int len, int v[])
{bool tem = false;
    for(int i = 0; i < len; i++)
    {
        if(v[i] > 0)
            tem = true;
    }
    return tem;
}//temElementos?

bool permitido(bool b, bool c)
{bool ok = false;
    if(b != c)
        ok = true;
    return ok;
}//

bool lastHaveOne(int len, int v[])
{bool partialZero = false;
    for(int i = 0; i < len-1; i++)
    {
        if(v[i] == 0)
            partialZero = true;
        else
            break;
    }
    if(partialZero == true && v[len-1] > 0)
        return true;
    else
        return false;
}

bool isAllZero(int len, int v[])
{bool zero = false;
    for(int i = 0; i < len; i++)
    {   
        if(v[i] == 0)
        {   
            zero = true;
        } else {
            zero = false;
            break;
        }
    }//for
    return zero;
}//isAllZero

bool isAllTrue(int len, bool v[])
{bool isAllTrue = true;
    for(int i = 0; i < len; i++)
    {    
        if(v[i] == false)
        {    
            isAllTrue = false;
            break;
        }
    }
    return isAllTrue;
}//isAllTrue

bool respeitaRegra(int base, int distancia, int len, int v[])
{bool respeita = false;
 int contador = 0;
    for(int i = 0; i < len; i++)
    {
        if(v[i] != base)
            contador++;
    }
    if(contador == distancia)
        respeita = true;
    else
        respeita = false;
    return respeita;
}//respeitaRegra

bool olhaAdiante(int distancia, int len, int v[])
{bool ok = false;
 int i = 0;
    
    if(isAllZero(len, v))
    {
        ok = true;
    } else if(lastHaveOne(len, v))
    {
        ok = true;
    } else {
        while(i < len-1)
        {int tmp[distancia];
        int inicio = 0;
        int fim = 0;
        int k = 0;
        int salto = distancia + 1;
            if(v[i] == 1 || v[i] == 2)
            {inicio = i+1;
            if(inicio > len-1)
            {
                ok = true;
                break;
            }
    
             fim  = i+distancia;
    
                for(int j = inicio; j <= fim; j++)
                {
                    tmp[k] = v[j];
                    k++;
                }//for
                
                //printArrd(k, tmp);
                if(respeitaRegra(v[i], distancia, k, tmp) == false)
                {
                    ok = false;
                    break;
                } else {
                    ok = true;
                    i+=salto;
                    //printf("%d\n",i);
                    continue;
                }
            }//if
            i++;
        }//while
    }
    return ok;
}//olhaAdiante

int main(void)
{int n = 0, m = 0, c = 0;

    scanf("%d %d %d", &n, &m, &c);
    int sala[n][m];
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                scanf(" %d", &sala[i][j]);
    }
    
    /*aplicando as regras*/
    bool obedece1[m];
    bool obedece2[m];
    bool regra1 = false;
    bool regra2 = false;
    {int k = 0;
     int l = 0;
     int p = 0;
        for(int i = 0; i < m; i++)
        {int tmp[n];
            for(int j = 0; j < n; j++)
            {
                tmp[j] = sala[j][k];
            }//for

            //printArr(n, tmp);
            obedece1[l] = temElementos(n, tmp);
            obedece2[p] = olhaAdiante(c, n, tmp);
            k++;
            l++;
            p++;
        }//for
        //printArr(m, obedece2);
        /*validade regra 1*/
        for(int i = 0; i < m - 1; i++)
        {
            if(permitido(obedece1[i], obedece1[i+1]))
            {    
                regra1 = true;
            } else if(obedece1[i] == 0 && obedece1[i+1] == 0) {
                regra1 = true;
            } else {    
                regra1 = false;
                break;
            }        
        }//for

        /*validade regra 2*/
        regra2 = isAllTrue(m, obedece2);
    }
    if(regra1 == true && regra2 == true)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}