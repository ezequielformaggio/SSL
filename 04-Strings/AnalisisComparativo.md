# Análisis Comparativo del tipo String:

Para este análisis, los lenguajes que se van a comparar son C y Haskell (Prelude).

Definicion de prelude:
El Prelude: un módulo estándar. El Prelude se importa de forma predeterminada en todos los módulos de Haskell, a menos que haya una declaración de importación explícita para él o que la extensión NoImplicitPrelude esté habilitada.

**Items:**

**a)¿El tipo es parte del lenguaje en algun nivel?**

| C |Haskell|
|--|--|
| En C no existe el tipo de dato String | En Haskell si (definido en el prelude como un tipo de dato [Char]|

**b)¿El tipo es parte de la biblioteca?**

Este tipo de dato no es parte de la biblioteca Stdio.h.

**c)¿Que alfabeto usa?**

El alfabeto que ambos lenguajes usan esta compuesto por los caracteres del código ASCII, sumándose ademas combinaciones entre los mismos.

Como por ejemplo \n es considerado un solo caracter en C, pero es una combinación de dos caracteres ASCII.

**d)¿Como se resuelve la alocacion de la memoria?**

Se dispone de 2 tipos de alocacion en memoria, por un lado la **alocacion estática**, en la cual la memoria que estas variables ocupan no puede cambiarse durante la ejecución y tampoco puede ser liberada manualmente, y la **alocacion dinámica**, Es memoria que se reserva en tiempo de ejecución. Su principal ventaja frente a la estática, es que su tamaño puede variar durante la ejecución del programa. (En C, el programador es encargado de liberar esta memoria cuando no la utilice más)

**e)¿El tipo tiene mutabilidad o es inmutable?**

El tipo string es inmutable, una vez que se guarda una variable con un string en memoria, y esta se desea modificar, no se hacen cambios en la misma, sino que se copia el contenido y se lo guarda en otra direccion de memoria.

Un ejemplo seria:

var = "fender"
var = var + "vg stratocaster"

En un princpio, tendremos guardado en direccion de memoria la cadena "fender", luego, cuando modificamos la variable, lo que en realidad sucede es que se guarda en otra direccion de memoria una copia (a la cual se va a apuntar) que dice "fender vg stratocaster", luego el recolector de basura (si es que se cuenta con uno) borrara la direccion de memoria que se creo con la cadena "fender" si esta ya no es apuntada.

**f)¿El tipo es un First class citizen?**

| C |Haskell|
|--|--|
| No | Si |

Definición:
*First Class Citizen: (also **type**, **object**, **entity**, or **value**) in a given programming language is an entity which supports all the operations generally available to other entities. These operations typically include being passed as an argument, returned from a function, modified, and assigned to a variable.*

**g)¿Cual es la mecánica para este tipo cuando se los pasa como argumentos?**

Retomando el ejemplo del item e), podriamos pasar el valor "fender" como argumento, y hacer la modificacion dentro de la funcion. 
Para ese entonces, tendriamos por un lado, la variable original var, por otro lado, la variable pasada como parametro, mas una copia modificada de la misma.

**h)¿Y cuando son retornados por una función?**

Si se retorna la variable, el valor var (que esta fuera de la funcion) ahora apuntara a la variable retornada por la funcion.

