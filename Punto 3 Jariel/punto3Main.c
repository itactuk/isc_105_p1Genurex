//
// Created by Ivan's PC on 10/13/2019.
//

#include <stdio.h>
#include <stdlib.h>

#include "punto3Lib.h"

int main(){
    int m=3,n=4;
    int matriz[3][4]={{3,4,5,3},
                      {2,3,2,2},
                      {1,2,0,1}};
    puntos_de_silla(m,n,matriz);

    return 0;
}
