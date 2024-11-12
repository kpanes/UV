#include <iostream>
#include "ArbolBinario.h"

int main(int argc, char** argv){
	ArbolBinario<int> arbol;
	arbol.insertar(10);
	arbol.insertar(20);
	arbol.insertar(30);
	arbol.insertar(5);
	arbol.insertar(10);
	arbol.insertar(7);
	arbol.insertar(4);
	
	arbol.eliminarAnt(1);
	
	/*if(arbol.buscar(50)){
		cout<<"Numero encontrado "<<endl;
	}else{
		cout<<"El numero no esta dentro del arbol ">>endl;
	}*/
	
	Nodo<int> *raiz =arbol.obtenerRaiz();
	
	return 0;
}
