#include <stdio.h>

/*
Enunciado:
Investigue y construya, en LENGUAJE C, la función que realiza cada operación solicitada:
*/

/*
* Ejercicio 20 *
(a) Calcula la longitud de una cadena;
(b) Determina si una cadena dada es vacía.
(c) Concatena dos cadenas.
*/

long calcularLongitudCadena(char cadena[]){

    long contador=0;

    while(cadena[contador]!=EOF){
        contador++;
    }

    return contador;

    /*printf("A continuacion escriba una cadena de caracteres \n");
    cadena = getchar();

    while((cadena = getchar()) != EOF){
        putchar(cadena);
        contador++;
    }
    
    printf("El numero total de caracteres es: %d \n", contador);

    // si la cadena fuera "computadora"
    // assert(contador==12);

    */
} // cuenta los caracteres a medida que los voy poniendo

int determinarCadenaVacia(char cadena[]){

    int cadenaVacia=1;

      if(cadena[0]!= EOF && cadena[0]!= '\0'){
        cadenaVacia=0;
    }

    return cadenaVacia;

    /*printf("A continuacion escriba una cadena de caracteres \n");
    cadena = getchar();

    while((cadena = getchar()) != EOF){
        putchar(cadena);
        contador++;
    }
*/
} // determina si una cadena dada es vacia

long potenciar(char cadena[], int potencia){

    long cadenaConcatenada;
    int i;

    cadenaConcatenada=cadena;

    for(i=0;i<potencia-1;i++){
        cadenaConcatenada = concatenarCadenas(cadenaConcatenada,cadena);
    }
    /*printf("A continuacion escriba una cadena de caracteres: \n");
    cadena = getchar();

    while((cadena = getchar()) != EOF){
        putchar(cadena);
    }

    printf("\n A continuacion escriba el exponente: \n");
    potencia = getchar();

    for(i=0;i<potencia;i++){
        concatenarCadenas(cadena,cadena);
    }
*/
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

/*
    printf("A continuacion escriba la primer cadena de caracteres \n");
    cadena1 = getchar();

    while((cadena1 = getchar()) != EOF){
        putchar(cadena1);
    }

    printf("A continuacion escriba la segunda cadena de caracteres \n");
    cadena2 = getchar();

    while((cadena2 = getchar()) != EOF){
        putchar(cadena2);
    }

    printf("%d %d", cadena1 , cadena2);
*/
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



