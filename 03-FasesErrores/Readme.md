﻿# Paso 1) hello2.c

    #include <stdio.h>
    
    int/*medio*/main(void){
        int i = 42;
        prontf("la respuesta es %d\n");
    }

**Error:** En este caso, el compilador no nos indica la presencia de un error sino que nos da
una señal de advertencia, ya que no esta declarada la funcion prontf, en su lugar nos  sugiere usar printf (ya que supone que existe un error de tipeo).

    warning: implicit declaration of function 'prontf'; did you mean 'printf'?

 comando ejecutado: gcc -o hello2.c

# Paso 2) Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su contenido.

Se crean 896 lineas de código entre las cuales hay llamadas a funciones y direcciones de archivos.
Desaparecen los comentarios.

# Paso 3) hello3.c

    int printf(const char *s, ...);
    
    int main(void){
    int i=42;
    pront("La respuesta es %d\n");

# Paso 4) Investigar la semantica de la primera linea:

    int printf(const char *s, ...);

La semántica es la siguiente:  int printf(const char* formato,...)
Siendo s el formato que la función printf va a imprimir (string)
significa que ahora existe un objeto pero no sabe para que lo va a usar, es una funcion que es invocable

# Paso 5) Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.i.

La diferencia entre ambos códigos, es que en hello3.i, aparecen nuevas lineas de código:

     #1 "hello3.c"
     #1 "<built-in>"
     #1 "<command-line>"
     #1 "hello3.c"C:\Users\EzequielFormaggio\Desktop\03-FasesErrores\hello4.c
     

comando utilizado: gcc -E hello3.c -o hello3.i

# Paso 6) Compilar el resultado y generar hello3.s, no ensamblar.

No es posible generar el archivo hello3.s ya que la función pront no esta definida, algo que el preprocesador "dejo pasar".

comando utilizado: gcc -S hello3.c -o hello.s

# Paso 7) Corregir en el nuevo archivo hello4.c y empezar de nuevo, generar hello4.s, no ensamblar.

hello4.c : 

    int printf(const char *s, ...);
    
    int main(void){
    int i=42;
    printf("La respuesta es %d\n");
    }

En este paso si se pudo generar el hello4.s

comando utilizado: gcc -E hello4.c -o hello4.i

# Paso 8) Investigar hello4.s.

	.file	"hello4.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
    .LC0:
    	.ascii "La respuesta es %d\12\0"
    	.text
    	.globl	main
    	.def	main;	.scl	2;	.type	32;	.endef
    	.seh_proc	main
    main:
    	pushq	%rbp
    	.seh_pushreg	%rbp
    	movq	%rsp, %rbp
    	.seh_setframe	%rbp, 0
    	subq	$48, %rsp
    	.seh_stackalloc	48
    	.seh_endprologue
    	call	__main
    	movl	$42, -4(%rbp)
    	leaq	.LC0(%rip), %rcx
    	call	printf
    	movl	$0, %eax
    	addq	$48, %rsp
    	popq	%rbp
    	ret
    	.seh_endproc
    	.ident	"GCC: (Rev2, Built by MSYS2 project) 9.3.0"
    	.def	printf;	.scl	2;	.type	32;	.endef

# Paso 9) Ensamblar hello4.s en hello4.o, no vincular

Visualmente no se generaron cambios

# Paso 10) Vincular hello4.o con la biblioteca estándar y generar el ejecutable

Se genero el ejecutable, el cual no permanece abierto en consola, se ejecuta y se cierra al instante

# Paso 11) Corregir en hello5.c y generar el ejecutable.

# Paso 12) Ejecutar y analizar el resultado.

Se ejecuta hello.5 y nos aparece el siguiente mensaje:
La respuesta es 10425264, el numero aparece por consecuencia de incluir el %d, que le indica al compilador que luego de esa cadena
se deberá mostrar un entero de forma decimal, al no haber una variable, supongo que el compilador utiliza una variable que tiene 
seleccionada por defecto y muestra su contenido "basura"

# Paso 13) Corregir en hello6.c y empezar de nuevo.
 
Una vez que ya no tenemos el %d, el programa muestra solamente el string que le escribimos, en este caso:
La respuesta es 

Otra variante seria poner: printf("La respuesta es %d\n", i);
de esta forma el compilador daría el mensaje correcto, y podríamos ver el valor de i.

# Paso 14) hello7.c

    int main(void){
      int i=42;
        printf("La respuesta es %d\n", i);
    }

# Paso 15) Explicar porque funciona.

En c no es necesario declarar una funcion para poder usarla, hay una declaracion implicita, pero el linker en este caso asume que printf es la misma funcion que se encuentra en la libreria estandar.

