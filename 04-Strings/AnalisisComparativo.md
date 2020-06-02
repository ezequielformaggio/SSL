# Análisis Comparativo del tipo String:

Para este análisis, los lenguajes que se van a comparar son C y C++.

**Items:**

**a)¿El tipo es parte del lenguaje en algun nivel?**

| C |C++|
|--|--|
| En C no existe el tipo de dato String | En c++ si |


**b)¿El tipo es parte de la biblioteca?**

Este tipo de dato no es parte de la biblioteca Stdio.h

**c)¿Que alfabeto usa?**

El alfabeto que ambos lenguajes usan esta compuesto por los caracteres del código ASCII, sumándose ademas combinaciones entre los mismos.

Como por ejemplo \n es considerado un solo caracter en C, pero es una combinación de dos caracteres ASCII.

**d)¿Como se resuelve la alocacion de la memoria?**

Se dispone de 2 tipos de alocacion en memoria, por un lado la **alocacion estática**, en la cual la memoria que estas variables ocupan no puede cambiarse durante la ejecución y tampoco puede ser liberada manualmente, y la **alocacion dinámica**, Es memoria que se reserva en tiempo de ejecución. Su principal ventaja frente a la estática, es que su tamaño puede variar durante la ejecución del programa. (En C, el programador es encargado de liberar esta memoria cuando no la utilice más)

**e)¿El tipo tiene mutabilidad o es inmutable?**

Mutabilidad de que?

**f)¿El tipo es un First class citizen?**

| C |C++|
|--|--|
| no | si |

Definición:
*First Class Citizen: (also **type**, **object**, **entity**, or **value**) in a given programming language is an entity which supports all the operations generally available to other entities. These operations typically include being passed as an argument, returned from a function, modified, and assigned to a variable.*

**g)¿Cual es la mecánica para este tipo cuando se los pasa como argumentos?**

Cual seria la mecanica?

**h)¿Y cuando son retornados por una función?**

mutabilidad, cambiar la cadena modificandola

no mutable, pisar el valor de la cadena anterior

ej "hola" cambiarla por "bola"
cambio la h por la b


mecanica de pasar un valor, por referencia o por valor

ej

s="hola"
s="bola"
se pisa

char S[] = "hola",
s[0]="b"

modifica



