# Fundamentos del lenguaje de programacion C++
## Proyecto con fines educativos

Se hace una revision basica del lenguaje de programacion C++ con la finalidad de hacer uso de este lenguaje de programacion para fines educativos.

Con la finalidad de desarrollar un programa sencillo que se encarga de mostrar un mensaje simple en pantalla con el lenguaje de programacion C++, se procede a ejecutar los siguientes pasos generales:

1. Importar la libreria necesaria para poder usar las funciones de entrada y salida del lenguaje de programacion.  
2. Definir el cuerpo de la función principal del programa.
3. Mostrar un mensaje sencillo en la pantalla del computador.

Para implementar este sencillo algoritmo, se procede de la siguiente manera:

1. Importar la libreria necesaria para poder usar las funciones de entrada y salida del lenguaje de programacion.  

Para poder mostrar informacion en la pantalla o leer informacion desde el teclado, se debe utilizar la libreria iostream

#include <iostream>  
/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/

2. Definir el cuerpo de la función principal del programa.

A continuación se define la funcion principal del programa  
int main(){		//Inicio de la funcion principal

3. Mostrar un mensaje sencillo en la pantalla del computador.

//Se usa la funcion cout del archivo iostream para mostrar mensajes en pantalla  
std::cout << "\nBienvenido a C++\n";

return 0; 	//indica que el programa temino satisfactoriamente
}				//Fin de la funcion principal

# Herramientas para escritura y compilacion de programas con lenguaje de programacion C++

Para poder compilar el codigo fuente de nuestro programa, tenemos diferentes alternativas, cada una mas completa que la anterior.

Un compilador simple que solo permite realizar labores muy elementales de compilacion.  
- DevC++ compilador libre para compilar codigo fuente en lenguaje C para Windows. 
http://orwelldevcpp.blogspot.com/

- CodeBlocks compilador disponible en diferentes plataformas para compilar codigo fuente en lenguaje C. 
http://www.codeblocks.org/

Un entorno de desarrollo de software libre para la edicion, depuracion y compilacion de codigo fuente en lenguaje de programacion C/C++  
- Eclipse para desarrollo C/C++ entorno de desarrollo que ademas de compilar los programas escritos en lenguaje C, dispone de numerosas caracteristicas adicionales. 
https://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/photonr

# REFERENCIAS

C++  
https://es.wikipedia.org/wiki/C%2B%2B

Colección Aprenda como si estuviera en primero  
http://www4.tecnun.es/recursos/labmat0.html

Fundamentos de programación con lenguaje C++  
https://openlibra.com/es/book/fundamentos-de-programacion-con-c

El lenguaje de programación C++
https://www.freelibros.org/programacion/el-lenguaje-de-programacion-c-plus-plus
