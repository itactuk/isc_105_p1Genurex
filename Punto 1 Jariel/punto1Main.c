//
// Created by Ivan's PC on 10/13/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "punto1Lib.h"

int main(){
    int tamano;
    char cadena[100];
    printf("Digite la cadena:\n");
    gets(cadena);
    printf("\n");
    tamano = strlen(cadena);
    invierte(cadena,tamano-1);
    printf("\n");
    return 0;
}
