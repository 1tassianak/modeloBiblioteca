#ifndef MYAPP_H
#define MYAPP_H

#include <stdio.h>
#include <stdlib.h>

//o myApp.h representa um módulo (componente) da aplicação que depende da biblioteca mylib
//mesmo não sendo utilizado nada de mylib_pub.h, evita quebra caso venha a declarar uma função ou tipo aqui
//que utilize alguma coisa de mylib_pub.h
//mantém o código modularizado como exemplificado na imagem do escopo da atividade
#include "mylib_pub.h"

int minhaFunca (int i);

#endif /* MYAPP_H */