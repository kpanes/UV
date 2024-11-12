#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
class ArbolBinario{
	private:
		//Apuntador al nodo raiz del arbol
		Nodo<T> *raiz;
		Nodo<T>* insertarRecursivo(Nodo<T> *nodoActual, const T &val);
	public:
		ArbolBinario();
		//~ArbolBinario();
		bool estaVacio();
		void insertar(const T &val);
		Nodo<T>* obtenerRaiz();
		//void InsertionSort();
};

//Constructor
template <typename T>
ArbolBinario<T>::ArbolBinario(){
	raiz = NULL;
}

template <typename T>
bool ArbolBinario<T>::estaVacio(){
	return raiz==NULL;
}

template <typename T>
void ArbolBinario<T>::insertar(const T &val){
	raiz = insertarRecursivo(raiz, val);
}

//METODO DE ORDENAMIENTO DE LA BARAJA
void InsertionSort(int ar[], int tam){
	for(int i=1; i<tam; i++){
		int index = ar[i];
		int j = i;
		while(j>0 && ar[j-1]>index){
			ar[j] = ar[j-1];
			j--;
		}
		ar[j] = index;
	}
}

//METODOS RECURSIVOS Y PRIVADOS
template <typename T>
Nodo<T>* ArbolBinario<T>::insertarRecursivo(Nodo<T> *nodoActual, const T &val){
	if(nodoActual == NULL){
		Nodo<T> *nuevoNodo = new Nodo<T>(val);
		return nuevoNodo;
	}
	if(val < nodoActual->val){
		// Insertar del lado izquierdo
		nodoActual->izq = insertarRecursivo(nodoActual->izq,val);
	}else if(val > nodoActual->val){
		//Insertar del lado derecho
		nodoActual->der = insertarRecursivo(nodoActual->der,val);
	}else{
		// No hace nada
	}
	return nodoActual;
}

