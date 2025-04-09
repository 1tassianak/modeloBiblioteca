#include <stdio.h>
#include <stdlib.h>
#include "mylib_pub.h"

int criarTDA(ppTDA pp, int tamanho_info){
     //1- alocar a estrutura na mnemória
    *pp = malloc(sizeof(TDA));
    
    //2- verificar se a alocação do ponteiro pp que aponta para a estrutura TDA deu certo
    if(!*pp){
     return FRACASSO;
    }

    //3- inicializo as variáveis internas da estrutura TDA
    //pp é ponteiro para o ponteiro "TDA *pTDA" então precisa da sintaxe (*pp)->
    (*pp)-> TDA_info1 = 0;
    (*pp)-> TDA_info2 = 0;
    (*pp)->tamanho_info = tamanho_info;

    return SUCESSO;
}


int retornarTDA_info1(pTDA p, int *TDA_info1){
    //1- Vrificar se ponteiros não são nulos
    if (!p || !TDA_info1) return FRACASSO; 

    //2-pegar o valor de TDA_info1 que está na estrutura
    //e atribuir para onde TDA_info1 aponta (neste caso aponta para "retorno" que está no main) 
    *TDA_info1 = p->TDA_info1;

    return SUCESSO;

}


int alterarTDA(pTDA p, int TDA_info){
    //1- Vrificar se ponteiros não são nulos
    if (!p) return FRACASSO;

    //1- a variável TDA_info1 da estrutura deve receber o valor passado por parâmetro em TDA_info
    //que neste caso é 10
    p->TDA_info1 = TDA_info;

    return SUCESSO;

}


int destroirTDA(ppTDA pp){
    //1- verifica se o ponteiro do ponteiro da estrutura não está vazio
    if(pp && *pp){
        //2- libera a memória de *pp
        free(*pp);
        //3- altera valor de *pp para NULL para evitar que contenha lixo
        *pp = NULL;
    }
    
    return SUCESSO;
}
