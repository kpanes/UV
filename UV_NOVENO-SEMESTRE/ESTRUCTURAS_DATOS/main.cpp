#include <iostream>
#include "ArbolOrden.h"

int main(int argc, char** argv){
	ArbolBinario<int> arbol;
	arbol.insertar(10);
	arbol.insertar(20);
	arbol.insertar(30);
	arbol.insertar(5);
	arbol.insertar(1);
	
	cout<<"Ordenamiento por insercion directa: "<<endl;
	arbol.InsertionSort();
	
	/*cout<<"Recorrido en InOrden: "<<endl;
	arbol.recorridoInOrden();*/
	return 0;
}
