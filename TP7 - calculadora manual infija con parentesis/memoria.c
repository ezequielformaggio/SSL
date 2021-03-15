#include "scanner.h"
#define TAMANIO_MEMORIA 100


TOKEN memoria[TAMANIO_MEMORIA]; // memoria es un arreglo de tokens declarados o calculados
int memoriaIndex = 0;

void declararID(TOKEN ID){ // funcion que declara una variable
    if(memoriaIndex >= TAMANIO_MEMORIA)
        printf("memoria llena"); // ERROR DE MEMORIA LLENA
    memoria[memoriaIndex++] = ID;
}

void actualizarID(TOKEN ID, int nuevoValor){ //funcion que actualiza el valor de una variable
    for(int i = 0; i<memoriaIndex;i++){
        if(strcmp(memoria[i].nombre,ID.nombre)==0){
            memoria[i].valor = nuevoValor;
        }
    }
}

int obtenerValorID(TOKEN ID){
    int flag = 0;
    for(int i = 0; i<memoriaIndex;i++){
        if(strcmp(memoria[i].nombre,ID.nombre)==0){
            flag = 1;
            return memoria[i].valor;
        }
    }
    if(flag == 0){
        printf("error token no declarado");
    }
}






