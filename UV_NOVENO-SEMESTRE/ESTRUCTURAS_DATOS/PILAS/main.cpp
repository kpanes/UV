#include <iostream>
#include "Pila.h"
using namespace std;

int main(int argc, char** argv){
	Pila <int> p;
	p.insertar(1);
	p.insertar(2);
	p.insertar(3);
	p.tamanio();
	//p.limpiar();
	// Encontrar el n�mero mayor en la pila
	int numeroMayor = miPila.encontrarNumeroMayor();

	// Imprimir el n�mero mayor
	cout << "El n�mero mayor en la pila es: " << numeroMayor << endl;
	p.invertirPila();
	cout << "Elementos de la pila despu�s de invertir: ";
	p.recorrer(); 
	return 0;
}
