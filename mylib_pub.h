#ifndef MYLIB_PUB_H
#define MYLIB_PUB_H

#include <stdio.h>
#include <stdlib.h>
#include "mylib_pri.h"

#define SUCESSO 0
#define FRACASSO 1

typedef struct TDA *pTDA, **ppTDA;

int criarTDA(ppTDA pp, int tamanho_info);
int retornarTDA_info1(pTDA p, int *TDA_info1);
int alterarTDA(pTDA p, int TDA_info);
int destroirTDA(ppTDA pp);

#endif /* MYLIB_PUB_H */