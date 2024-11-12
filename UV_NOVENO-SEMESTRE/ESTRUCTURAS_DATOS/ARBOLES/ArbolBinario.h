#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
class ArbolBinario{
	private:
		//Apuntador al nodo raiz del arbol
		Nodo<T> *raiz;
		Nodo<T>* insertarRecursivo(Nodo<T> *nodoActual, const T &val);
		//void destruirArbol(Nodo<T> *nodoActual);
		bool buscar(const T &valor, Nodo<T> *nodoActual);
		void eliminarAnt(Nodo<T> *nodoActual, const T valor);
		//void eliminarSuc(Nodo<T> *nodoActual, const T valor);
	public:
		ArbolBinario();
		//~ArbolBinario();
		bool estaVacio();
		void insertar(const T &val);
		
		Nodo<T>* obtenerRaiz();
		bool buscar(const T &valor);
		void eliminarAnt(const T &valor);
		//void eliminarSuc(const T &valor);
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

template <typename T>
void ArbolBinario<T>::eliminarAnt(const T &valor){
	raiz = eliminarAnt(raiz, valor); 
}

/*template <typename T>
void ArbolBinario<T>::eliminarSuc(const T &valor){
	raiz = elimiarSuc(raiz, valor);
}*/

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

template <typename T>
Nodo<T>* ArbolBinario<T>::obtenerRaiz(){
	return raiz;
}

template <typename T>
Nodo<T>* ArbolBinario<T>::eliminarAnt(Nodo<T> *nodoActual, const T &valor){
	if(NodoActual == NULL){
		return nodoActual;
	}
	//si el valor a eliminar es menor al valor del nodo actual buacamos sobre el subarbol izquierdo
	if(valor < nodoActual->val){
		eliminarAnt(nodoActual->izq,valor);
	//si el valor a eliminar es mayor al valor del nodo actual buacamos sobre el subarbol derecho
	}else if(){
		eliminarAnt(nodoActual->der,valor);
		
	//si no es enor, ni es mayor, entonces se a encontrado el nodo a eliminar
	}else{
		// Caso 1: el nodo es una hoja, izquierda es nulo y derecho es nulo
		if(nodoActual->izq==NULL && nodoActual->der==NULL){
			delete nodoActual;
			return NULL;
		// Caso 2: Nodo tiene al menos un hijo			
		}else if(nodoActual->izq == NULL){
			Nodo<T> temp = nodoActual->der;
			delete nodoActual;
			return temp;
		}else if(nodoActual->der == NULL){
			Nodo<T> temp = nodoActual->izq;
			delete nodoActual;
			return temp;
		}
	}
	return nodoActual;
}
