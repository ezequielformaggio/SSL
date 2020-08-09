/*
Enunciado:
Investigue y construya, en LENGUAJE C, la función que realiza cada operación solicitada:

* Ejercicio 20 *
(a) Calcula la longitud de una cadena;
(b) Determina si una cadena dada es vacía.
(c) Concatena dos cadenas.
*/

#include <stdio.h>

long calcularLongitudCadena(char cadena[]){

    long contador=0;

    while(cadena[contador]!=EOF){
        contador++;
    }

    return contador;

    
} 

int determinarCadenaVacia(char cadena[]){

    int cadenaVacia=1;

      if(cadena[0]!= EOF && cadena[0]!= '\0'){
        cadenaVacia=0;
    }

    return cadenaVacia;

} // determina si una cadena dada es vacia

long potenciar(char cadena[], int potencia){

    long cadenaConcatenada;
    int i;

    cadenaConcatenada=cadena;

    for(i=0;i<potencia-1;i++){
        cadenaConcatenada = concatenarCadenas(cadenaConcatenada,cadena);
    }

    return cadenaConcatenada;
}

long concatenarCadenas(char cadena1[],char cadena2[]){

    long contador;
    long cadenaConcatenada[1000];

    while(cadena1!=EOF){
        cadenaConcatenada[contador]=cadena1[contador];
        contador++;
    }

    while(cadena2!=EOF){
        cadenaConcatenada[contador]=cadena2[contador];
        contador++;
    }

    return cadenaConcatenada;


} // concatena dos cadenas

int compararCadenas (char cadena1[],char cadena2[]){

    long contador;
    int cadenasIguales=1;

    while(cadena1[contador]==cadena2[contador]){
        contador++;
    }

    if(cadena1[contador]!=cadena2[contador]){
        cadenasIguales=0;
    }

    return cadenasIguales;
} 



