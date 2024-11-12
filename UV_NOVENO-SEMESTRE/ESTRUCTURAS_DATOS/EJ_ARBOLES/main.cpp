#include <iostream>
#include "ArbolBinario.h"

int main(int argc, char** argv){
	ArbolBinario<int> arbol;
	arbol.insertar(10);
	arbol.insertar(20);
	arbol.insertar(30);
	arbol.insertar(5);
	arbol.insertar(1);
	Nodo<int> *raiz =arbol.obtenerRaiz();
	
	cout<<"Recorrido en InOrden: "<<endl;
	arbol.recorridoInOrden();
	
	cout<<"Recorrido en PreOrden: "<<endl;
	arbol.recorridoPreOrden();
	
	cout<<"Recorrido en PostOrden: "<<endl;
	arbol.recorridoPostOrden();
	return 0;
}
