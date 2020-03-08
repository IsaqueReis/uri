#include <stdio.h>
#include <stdlib.h>

typedef struct sNode
{
    int key;
    struct sNode *left, *right;
} NODE;

//imprime ordenada
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

NODE *search(NODE *root, int key)
{
    //caso base: ou a chave esta logo na raiz, ou a raiz é NULL
    if(root == NULL || root -> key == key)
        return root;
    
    //se a chave for maior que a raiz
    if(root -> key < key)
        return search(root -> right, key);
    
    //se a chave for maior que a raiz
    return search(root -> left, key);
}


//retorna o menor valor de uma arvore não vazia
NODE *minValue(NODE *root)
{
    NODE *current = root;
    //procura a menor folha
    while( current -> left != NULL)
        current = current -> left;

    return current;
}

//deleta o nodo solicitado e retorna uma nova arvore
NODE *delete(NODE *root, int key)
{
    //caso base
    if(root == NULL)
        return root;
    
    //se a chave é menor que a raiz, entao ela deve estar a esquerda
    if(key < root -> key)
        root -> left = delete(root -> left, key);
    
    //se a chave é maior que a raiz, entao ela deve estar a direita
    else if(key < root -> key)
        root -> right = delete(root -> right, key);
    
    //se a chave é a mesma da raiz enton essa deve ser deletada
    else 
    {
        //nodo com um filho ou nenhum filho
        if(root -> left == NULL)
        {
            NODE *tmp = root -> right;
            free(root);
            return tmp;
        } else if(root -> right == NULL) {
            NODE *tmp = root -> left;
            free(root);
            return tmp;
        }

        //nodo com dois filhos : pega o sucessor emordem 
        NODE *tmp = minValue(root -> right);

        //copia o conteudo
        root -> key = tmp -> key;

        //deleta o sucessor
        root -> right = delete(root -> right, tmp -> key);
    }
    return root;
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
    //printArr(n, ord);
    return 0;
}