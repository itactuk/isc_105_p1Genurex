
//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto3Lib.h"

/**
 * Retorna una estructura que contiene un arreglo de indices(x,y) y la cantidad total de puntos de sillas encontrados.
 * Se dice que una matriz tiene un punto de silla si alguna posición de la matriz es
 * el menor valor de su fila
 * y a la vez el mayor de su columna
 * @param m
 * @param n
 * @param matriz
 * @return
 */
RESULTADOS puntos_de_silla(int m, int n, int matriz[m][n]){
    RESULTADOS res;

    int minimo,maximo,num;
    int i,j,p,q;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            num=matriz[i][j];
            minimo=num;
            maximo=num;
            for(p=0;p<m;p++){
                for(q=0;q<n;q++){
                    if(matriz[i][q]<minimo){
                        minimo=matriz[i][q];
                    }
                }
                if(matriz[p][j]>maximo){
                    maximo=matriz[p][j];
                }
            }
            if(minimo==num && maximo==num){
                printf("Valor silla: %d - Posicion: (%d,%d)\n",num,i,j);
                res.cantidad_resultados_indices = 0;
                res.indices[res.cantidad_resultados_indices].x = i;
                res.indices[res.cantidad_resultados_indices].y = j;
                res.cantidad_resultados_indices ++;
            }
        }
    }
    return res;
}
