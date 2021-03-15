#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED
#include "buffer.h"

#define TAMANIO_MAXIMO_LEXEMA 100

typedef enum {
    CONSTANTE, IDENTIFICADOR, PARENIZQUIERDO, CALCULAR, DEFINIR,
    PARENDERECHO, COMA, ASIGNACION, SUMA, MULTIPLICACION, FDT
} TIPOTOKEN;

typedef struct {
    TIPOTOKEN tipoToken;
    char nombre[100];
    int valor;
} TOKEN;

TOKEN getNextTOKEN(void);
void devolerCaracter(int c);
void constante(int c);
void identificador(int c);

#endif