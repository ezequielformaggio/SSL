#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "parser.h"
#include "scanner.h"
#include "memoria.h"

TOKEN tokenActual;

void objetivo(void){
    tokenActual = getNextTOKEN();
    listaSentencias();
    Match(FDT);
    printf("PARSER: Fin del analisis sintactico, no se detectaron errores \n");
}

void listaSentencias(void){
    while (tokenActual.tipoToken != FDT){
        sentencia();
    } 
}

void definir(){
    TOKEN auxiliar;
    int resultado;
    auxiliar = tokenActual;
            declararID(auxiliar);
            Match(IDENTIFICADOR); 
            Match(ASIGNACION); 
            resultado = expresion(); 
            actualizarID(auxiliar,resultado);
            Match(COMA);
}

void sentencia(void){
    TOKEN auxiliar;
    int resultado;
    while(tokenActual.tipoToken != FDT){ // fdt deberia ser COMA ya que es el final de una sentencia
    switch (tokenActual.tipoToken) {
        case DEFINIR:
            Match(DEFINIR); 
            definir();
            break;
        case CALCULAR: 
            auxiliar = tokenActual;
            declararID(auxiliar);
            Match(CALCULAR);
            resultado = expresion();
            actualizarID(auxiliar,resultado);
            Match(COMA);
            printf("\n el resultado de obtener id es: %d", obtenerValorID(auxiliar));
            break;
        default:
            printf("PARSER: error sintactico \n");
            return;
            break;
    }
}
}

int expresion(void){
    int resultado = termino();
    if(tokenActual.tipoToken == SUMA){
        Match(SUMA);
        resultado += expresion();
        
    }
    return resultado;
}

int termino(void){
    int resultado = factor();
    TOKEN centinela = tokenActual;

    if(tokenActual.tipoToken == PARENDERECHO){
    Match(PARENDERECHO);
    }
    tokenActual = getNextTOKEN(); 
    if(tokenActual.tipoToken == FDT){
        tokenActual = centinela;
    }

    if(tokenActual.tipoToken == MULTIPLICACION){
        Match(MULTIPLICACION);
        resultado *= expresion();
    }
    return resultado;
}


int factor(){
    int resultado;
    switch (tokenActual.tipoToken){
    case IDENTIFICADOR:
        resultado = obtenerValorID(tokenActual); 
        break;
    case CONSTANTE:
        resultado = tokenActual.valor;
        break;
    case PARENIZQUIERDO:

        Match(PARENIZQUIERDO);
        resultado = expresion();
        while (tokenActual.tipoToken == PARENDERECHO){
            Match(PARENDERECHO);
        }
        break;
    default:
        printf("ERROR, token invalido");
    }
    return resultado;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void errorSintactico(TOKEN esperado1, TOKEN esperado2, TOKEN actual){
    printf("PARSER: error sintactico, TOKEN invalido, se esperana uno de " );//+ esperado1 + ", " +  esperado2 + " , pero se encontro " + actual + "\n"); 
}

void Match(TIPOTOKEN tipoEsperado){
    if(tipoEsperado ==  tokenActual.tipoToken){
        tokenActual = getNextTOKEN();
        return;
    } else {
        printf("\n Error de Match");
    }
}