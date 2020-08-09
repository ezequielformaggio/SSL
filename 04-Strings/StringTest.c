#include <assert.h>
#include "string.h"

/*
* Ejercicio 20 *
Construya un programa de testeo para cada función del ejercicio anterior
*/

long calcularLongitudCadena(char cadena[]);
int determinarCadenaVacia(char cadena[]);
long potenciar(char cadena[], int potencia);
long concatenarCadenas(char cadena1[],char cadena2[]);

int main(){

const char *cadenaDePrueba1;
const char *cadenaDePrueba2;
const char *cadenaDePrueba3;

cadenaDePrueba1="Hola ";
cadenaDePrueba2="¿cómo esta?";
cadenaDePrueba3="";

assert(calcularLongitudCadena(cadenaDePrueba1)==6);
assert(calcularLongitudCadena(cadenaDePrueba2)!=11);
assert(determinarCadenaVacia(cadenaDePrueba2)!=0);
assert(determinarCadenaVacia(cadenaDePrueba3)==1);
assert(cadenasIguales(potenciar(cadenaDePrueba1,3),"Hola Hola Hola ")==1);
assert(cadenasIguales(potenciar(cadenaDePrueba2,2),"¿cómo esta?¿cómo esta?")==1);
assert(cadenasIguales(potenciar(cadenaDePrueba2,0),cadenaDePrueba3)==1);
assert(cadenasIguales(concatenarCadenas(cadenaDePrueba2,cadenaDePrueba1),"¿cómo esta?Hola ")==1);
assert(cadenasIguales(concatenarCadenas(cadenaDePrueba1,cadenaDePrueba3),cadenaDePrueba1)==1);

}

