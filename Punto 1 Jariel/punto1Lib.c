//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto1Lib.h"

/**
 * Invierte una cadena.
 * Dado: "Hola" debe de convertila en "aloH"
 * @param cadena
 */
void invierte (char cadena[],int tamano){
    if(tamano<0){
      return;
   }else{
      printf("%c",cadena[tamano]);
      invierte(cadena,tamano-1);
   }
}
