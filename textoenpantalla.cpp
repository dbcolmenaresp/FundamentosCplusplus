/*Un programa simple en C++ para imprimir una linea de texto
realizado con la finalidad de mostrar el esquema basico de un programa en lenguaje C++*/

/*Autor: Ing. Danny Colmenares
  @dbcolmenaresp*/

#include <iostream>
/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/

int main(){		//Inicio de la funcion principal

	//Presentacion
	std::cout << "Programa realizado para presentar la estructura basica \nde un programa en lenguaje C++\n";
	std::cout << "Programa realizado con fines educativos\n";
	std::cout << "Programa realizado por Ing. Danny Colmenares\n";
	std::cout << "Contacto twitter @dbcolmenaresp\n";
	
	//Se usa la funcion cout de la libreria iostream para mostrar mensajes en pantalla
	std::cout << "\nBienvenido a C++\n";

	return 0; 	//indica que el programa temino satisfactoriamente
}				//Fin de la funcion principal
