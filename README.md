# Fundamentos del lenguaje de programacion C++
## Proyecto con fines educativos

Se hace una revision basica del lenguaje de programacion [C++](https://es.wikipedia.org/wiki/C%2B%2B) con la finalidad de hacer uso de este lenguaje de programacion para fines educativos.

El lenguaje de programacion C++ puede ser considerado como una extensión del lenguaje C, debido a que permite muchas mas posibilidades que este.

Los componentes principales de un programa C++ son los siguientes:  
- Directivas de preprocesamiento son las encargadas de definir los archivos adicionales que se importan en el programa para ser usados dentro del programa.  
- Declaraciones globales son variables que se usan en todo el programa y que no tienen limite de vigencia dentro del programa.  
- Función main es la función principal del programa donde inicia la ejecución del mismo y es obligatoria la existencia de una función main en todo programa en lenguaje C++.  
- Funciones definidas por el usuario son funciones adicionales que define el usuario para realizar alguna tarea determinada o una acción que se repite dentro de la ejecución del programa, para hacerlo más legible y optimo.  
- Comentarios para entender el comportamiento del programa son texto que se añade al programa con la finalidad de mejorar el entendimiento del programa, ya que a través de los mismos se hace una explicación breve del funcionamiento del bloque de código que se expone. Puede ser un comentario simple de una sola línea precedido por los símbolos // o un bloque de comentario de varias líneas iniciando con los símbolos /* y finalizando con los símbolos */.  

Con la finalidad de desarrollar un programa sencillo que se encarga de mostrar un mensaje simple en pantalla con el lenguaje de programacion C++, se procede a ejecutar los siguientes pasos generales:

1. Importar la libreria necesaria para poder usar las funciones de entrada y salida del lenguaje de programacion.  
2. Definir el cuerpo de la función principal del programa.
3. Mostrar un mensaje sencillo en la pantalla del computador.

Para implementar este sencillo algoritmo, se procede de la siguiente manera:

1. Importar la libreria necesaria para poder usar las funciones de entrada y salida del lenguaje de programacion.  

Para poder mostrar informacion en la pantalla o leer informacion desde el teclado, se debe utilizar la libreria iostream

~~~c++
#include <iostream>  
/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/
~~~

2. Definir el cuerpo de la función principal del programa.

A continuación se define la funcion principal del programa  

~~~c++
int main(){		//Inicio de la funcion principal
~~~

Después del main, se debe incluir una apertura y cierre de llaves con la finalidad de indicar que todas las sentencias que se indican a continuación pertenecen a un mismo bloque de código y evitar confusiones para el compilador.

3. Mostrar un mensaje sencillo en la pantalla del computador.

~~~c++
//Se usa la funcion cout del archivo iostream para mostrar mensajes en pantalla  
std::cout << "\nBienvenido a C++\n";

return 0; 	//indica que el programa temino satisfactoriamente  
}				//Fin de la funcion principal
~~~

La sentencia return dentro de la función main tiene la función de devolver el control de ejecución al sistema operativo, devolviendo como argumento un valor numérico que indica la correcta finalización del programa ejecutado.

## Herramientas para escritura y compilacion de programas con lenguaje de programacion C++

Para poder compilar el codigo fuente de nuestro programa, tenemos diferentes alternativas, cada una mas completa que la anterior.

Un compilador simple que solo permite realizar labores muy elementales de compilacion.  
- DevC++ compilador libre para compilar codigo fuente en lenguaje C para Windows. 
http://orwelldevcpp.blogspot.com/

- CodeBlocks compilador disponible en diferentes plataformas para compilar codigo fuente en lenguaje C. 
http://www.codeblocks.org/

Un entorno de desarrollo de software libre para la edicion, depuracion y compilacion de codigo fuente en lenguaje de programacion C/C++  
- Eclipse para desarrollo C/C++ entorno de desarrollo que ademas de compilar los programas escritos en lenguaje C, dispone de numerosas caracteristicas adicionales. 
https://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/photonr

## REFERENCIAS

C++  
https://es.wikipedia.org/wiki/C%2B%2B

Colección Aprenda como si estuviera en primero  
http://www4.tecnun.es/recursos/labmat0.html

Fundamentos de programación con lenguaje C++  
https://openlibra.com/es/book/fundamentos-de-programacion-con-c

El lenguaje de programación C++  
https://www.freelibros.org/programacion/el-lenguaje-de-programacion-c-plus-plus
