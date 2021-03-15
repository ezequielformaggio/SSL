#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "scanner.h"
#include "buffer.h"

char buffer[TAMANIO_MAXIMO_LEXEMA] = {};
int bufferIndex = 0;

TOKEN getNextTOKEN(void) {

    TOKEN TOKEN;
    TOKEN.tipoToken = FDT; // lo inicializo asi por defecto
    int caracter = getchar(); 

    while (caracter == ' '){
        caracter = getchar();
    };

    if(caracter == EOF || caracter == '\n' || caracter == '#'){
        TOKEN.tipoToken = FDT;
    } else if(isdigit(caracter)) {

        constante(caracter); 
        TOKEN.tipoToken = CONSTANTE;
        TOKEN.valor = atoi(buffer); // le damos valor al Token

    } else if(isalpha(caracter) && caracter != '$' && caracter != '@') { // ver si las declaro como reservadas

        identificador(caracter); 
        TOKEN.tipoToken = IDENTIFICADOR;
        strcpy(TOKEN.nombre, buffer);

    } else if(caracter == '$') {
        //guardarToken(TOKEN,caracter,CALCULAR);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = CALCULAR;
    } else if(caracter == '@'){
        //guardarToken(TOKEN,caracter,DEFINIR);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = DEFINIR;
    } else if(caracter == '+') {
        //guardarToken(TOKEN,caracter,SUMA);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = SUMA;
    } else if(caracter == '*') { 
        //guardarToken(TOKEN,caracter,MULTIPLICACION);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = MULTIPLICACION;
    } else if(caracter == '(') { 
        //guardarToken(TOKEN,caracter,PARENIZQUIERDO);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = PARENIZQUIERDO;
    } else if(caracter == ')') { 
        //guardarToken(TOKEN,caracter,PARENDERECHO);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = PARENDERECHO;
    } else if(caracter == '=') { 
        //guardarToken(TOKEN,caracter,ASIGNACION);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = ASIGNACION;
    } else if(caracter == ',') { 
        //guardarToken(TOKEN,caracter,COMA);
        almacenarCaracterEnBuffer(caracter);
        strcpy(TOKEN.nombre, buffer);
        TOKEN.tipoToken = COMA;
    } else {
        printf("SCANNER: error lexico, caracter invalido, (caracter detectado ASCII %d) \n", caracter); 
    }

    liberarBuffer();
    return TOKEN; 
}

void devolerCaracter(int c){
    ungetc(c,stdin);  //ver si esa bien
}

void constante(int c){ 
    while (isdigit(c)){ 
        almacenarCaracterEnBuffer(c); 
        c = getchar();
    }
    devolerCaracter(c);
}

void identificador(int c){
   while (isalpha(c)){
       almacenarCaracterEnBuffer(c); 
       c = getchar();
   }
   devolerCaracter(c);
}

// BUFFER //

void almacenarCaracterEnBuffer(char caracter){ // esto sucederia en tiempos de ejecicion, no hay chequeo previo del largo de la variable

if(bufferIndex >= TAMANIO_MAXIMO_LEXEMA){
    printf("error, colapso del buffer"); // printf error
}
    buffer[bufferIndex++] = caracter;
} 

void liberarBuffer(){

    memset(buffer, 0, sizeof buffer);
    bufferIndex = 0;
}


