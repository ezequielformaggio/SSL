#ifndef MEMORIA_H_INCLUDED
#define MEMORIA_H_INCLUDED

#include "scanner.h"

void declararID(TOKEN ID);

void actualizarID(TOKEN ID, int nuevoValor);

int obtenerValorID(TOKEN ID);

/*
// aca pondria funciones que me permitan obtener valores o escribir valores de una variable 
//por ejemplo, sin meternos en identeificadores ni tokens

double get(TOKEN o direccion de memoria (es una variable)); //pasar una variable, que estan en la tabla simbolos

void set(VARIABLE var, double valor); (para darle un valor a una variable) // colocarTS() y buscarTS()

//guardar las variables donde sea conveniente, pero en memoria.c
*/

#endif