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
		void recorridoInOrden();
		void recorridoPreOrden();
		void recorridoPostOrden();
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

//////RECORRIDO InOrden////

template <typename T> //RECORRE EL ARBOL DE MANERA RECURSIVA
void recorridoInOrdenAux(Nodo<T>* nodoActual) {
    if (nodoActual != NULL) {
        recorridoInOrdenAux(nodoActual->izq);  // Recorre el subárbol izquierdo
        cout << nodoActual->val << " ";        // Visita el nodo actual
        recorridoInOrdenAux(nodoActual->der);  // Recorre el subárbol derecho
    }
}

template <typename T> //LLAMA A LA FUNCION AUXILIAR
void ArbolBinario<T>::recorridoInOrden() {
    recorridoInOrdenAux(raiz);
    cout<<endl;
}

/////RECIRRIDO PreOrden/////

template <typename T> //RECORRE EL ARBOL DE FORMA RECURSIVA
void recorridoPreOrdenAux(Nodo<T>* nodoActual) {
    if (nodoActual != NULL) {
        cout << nodoActual->val << " ";        // Visita el nodo actual
        recorridoPreOrdenAux(nodoActual->izq);  // Recorre el subárbol izquierdo
        recorridoPreOrdenAux(nodoActual->der);  // Recorre el subárbol derecho
    }
}

template <typename T> //LLAMA A LA FUNCION AUXILIAR DE ARRIBA
void ArbolBinario<T>::recorridoPreOrden() {
    recorridoPreOrdenAux(raiz);
    cout<<endl;
}


//////RECORRIDO PostOrden/////

template <typename T>
void recorridoPostOrdenAux(Nodo<T>* nodoActual){
	if(nodoActual != NULL){
		recorridoPostOrdenAux(nodoActual->izq); //Recorre el usbarbol izquierdo
		recorridoPostOrdenAux(nodoActual->der); //Recorre el subarbol derecho
		cout<<nodoActual->val<<" ";				//Visita el nodo actual
	}
}

template <typename T>
void ArbolBinario<T>::recorridoPostOrden() {
	recorridoPostOrdenAux(raiz);
	cout<<endl;
}
