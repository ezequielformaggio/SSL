#include "string.h"

long calcularLongitudCadena(char cadena[]);
int determinarCadenaVacia(char cadena[]);
long potenciar(char cadena[], int potencia);
long concatenarCadenas(char cadena1[],char cadena2[]);
int compararCadenas (char cadena1[],char cadena2[]);

int main(){

    char opcion;
    const char *cadenaDePrueba1;
    const char *cadenaDePrueba2;

    printf("Seleccione la operacion a realizar: \n");
    printf("a. calcular la longitud de una cadena. \n");
    printf("b .determinar si una cadena es vacia. \n");
    printf("c .potenciar una cadena. \n");
    printf("d .concatenar dos cadenas. \n");
    printf("e .comparar dos cadenas. \n");
    printf("f .salir del programa. \n");

    opcion = getchar();
    

    switch (opcion)
    {
    case 'a':

        long longitud;

        printf("Escriba la cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba1=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        longitud = calcularLongitudCadena(cadenaDePrueba1);

        printf("la longitud de la cadena dada es: %d \n", longitud);

        break;

    case 'b':

        int cadenaVacia;

        printf("Escriba la cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba1=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        cadenaVacia = determinarCadenaVacia(cadenaDePrueba1);

        if(cadenaVacia==0){
            printf("la cadena dada no es vacia \n");
        } else {
            printf("la cadena dada es vacia \n", longitud);
        }
        
        break;

    case 'c':

        int exponente;

        printf("Escriba la cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba1=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        printf("Escriba el exponente al cual se va a potenciar la cadena y presione la tecla 'enter' para confirmar: \n");

        while((exponente=getchar()!='13')){
            putchar(exponente);
        }

        printf("La cadena resultante es: \n \n");
        printf(potenciar(cadenaDePrueba1,exponente));

        break;

    case 'd':

        printf("Escriba la primer cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba1=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        printf("Escriba la segunda cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba2=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        printf("La cadena resultante es: \n \n");
        concatenarCadenas(cadenaDePrueba1,cadenaDePrueba2);

        break;

    case 'e':

        int cadenasComparadas;

        printf("Escriba la primer cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba1=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        printf("Escriba la segunda cadena a continuacion y presione la tecla 'enter' para confirmar: \n");

        while((cadenaDePrueba2=getchar()!='13')){
            putchar(cadenaDePrueba1);
        }

        if (compararCadenas(cadenaDePrueba1,cadenaDePrueba2)==1){

        printf("las cadenas dadas son iguales \n");

        } else {

            printf("las cadenas dadas son diferentes \n");

        }
        
        break;

    case 'f':

        printf("Saliendo del programa \n");

        break;

    default:

        printf("La opcion ingresada es incorrecta. \n");

        break;
    }

}