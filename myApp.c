#include <stdio.h>
#include <stdlib.h>
#include "mylib_pub.h"
#include "myApp.h"

int minhaFunca (int i) {
    //fazer qualquer operação para não dar warning de não uso
    return i * 2;
}

//compilação do programa para que apareça as mensagens de erros e warnings:
//gcc -Wall -Wextra -g myApp.c mylib.c -o main
//-Wall: para avisos principais
//-Wextra: avisos adicionais importantes
//-g: gerar infos de debug para o gdb e valgrind

//passar valgrind com relatório completo:
// valgrind --leak-check=full --track-origins=yes ./main
//--leak-check=full: mostra relatório completo de vazamentos
//--track-origins=yes: indica onde os erros de uso de memória começaram

//o main foi declarado com parâmetros: int argc, char **argv assim: int main(int argc, char **argv)
//porém, como os argumentos não são utilizados, e é possível alterar o main,
//alterei para int main(void)
//outra alternativa seria silenciar o warning declarando dentro do int main(void) {(void)argc; (void)argv; ....}
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

	pTDA meuTDA;
	int retorno=-9;
	
	if(criarTDA(&meuTDA, sizeof(int))){
		printf("Erro ao criar o TDA.\n");
		exit(1);
	}
	printf("Criacao OK.\n");
	if (alterarTDA(meuTDA, 10)) {
		printf("Erro ao alterar o TDA.\n");
		exit(1);
	}
	printf("Alteracao OK.\n");
	if (retornarTDA_info1(meuTDA, &retorno)) {
		printf("Erro ao alterar o TDA.\n");
		exit(1);
	}
	printf("Retorno OK (valor = %d).\n",retorno);
	if(destroirTDA(&meuTDA)){
		printf("Erro ao destruir o TDA.\n");
		exit(1);
	}
	printf("Destruicao OK.\n");
	return 0;
}
