#include <stdio.h>
#include <stdlib.h>

typedef struct sNode
{
    int key;
    struct sNode *left, *right;
} NODE;

//imprime na ordem pos-fixa
int inorder(NODE *root)
{
    if(root != NULL)
    {
        inorder(root -> left);
        inorder(root -> right);
        printf("%d\n", root -> key);
    }
}

//cria um novo nodo para arvore binaria de busca
NODE *newNode(int item)
{
    NODE *tmp = (NODE*) calloc(1, sizeof(NODE));
    tmp -> key = item;
    tmp -> left = tmp -> right = NULL;
    return tmp;
}

//insere um novo nodo na arvore
NODE *insert(NODE *node, int key)
{
    //se a arvore está vazia, retorne um novo nodo
    if(node == NULL)
        return newNode(key);
    //caso contrario volte pela arvore
    if(key < node -> key)
        node -> left = insert(node -> left, key);
    else if(key >  node -> key)
        node -> right = insert(node -> right, key);
    
    //retorna o nodo sem modificoes
    return node;
}

int main(void)
{NODE *root = NULL;

    /*valores de pesquisa*/
    int tmp = 0;
        scanf("%d", &tmp);

    root = insert(root, tmp);
    while(scanf(" %d", &tmp) != EOF)
        root = insert(root, tmp);

    inorder(root);
    return 0;
}