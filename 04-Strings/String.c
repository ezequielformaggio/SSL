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

calcularLongitudCadena(){

    long contador;
    long cadena;

    printf("A continuacion escriba una cadena de caracteres \n");
    cadena = getchar();

    while((cadena = getchar()) != EOF){
        contador++;
    }
    
    printf("El numero total de caracteres es: %d \n", contador);

} // cuenta los caracteres a medida que los voy poniendo

determinarCadenaVacia(){

    long cadena;
    long contador;

    printf("A continuacion escriba una cadena de caracteres \n");
    cadena = getchar();

    while((cadena = getchar()) != EOF){
        contador++;
    }

    if(cadena != EOF){
        printf("La cadena no es vacia \n");
    } else {
        printf("La cadena es vacia \n");
    }

} // determina si una cadena dada es vacia

concatenarCadenas(){

    long cadena1;
    long cadena2;

    printf("A continuacion escriba la primer cadena de caracteres \n");
    cadena1 = getchar();

    while((cadena1 = getchar()) != EOF){
        cadena1 = getchar();
    }

    printf("A continuacion escriba la segunda cadena de caracteres \n");
    cadena2 = getchar();

    while((cadena2 = getchar()) != EOF){
        cadena2 = getchar();
    }

    printf("%d %d", cadena1 , cadena2);

} // concatena dos cadenas


