#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
class Lista{
	private:
		//Apuntador al primer nodo de la lista
		Nodo<T> *head;
	public:
		Lista();
		//~Lista();
		//OPERACIONES BASICAS
		void inserInicio(const T &valor);
		//void mostrarElementos();
		bool estaVacia();	
};

template <typename T>
Lista<T>::Lista(){
	head=NULL;
	//head=nullptr;
}

template <typename T>
bool Lista<T>::estaVacia(){
	return head==NULL;
}

template <typename T>
void Lista<T>::inserInicio(const T &valor){
	//Creamos el primer nodo y le asiganmos el valor proporcionado
	Nodo<T> *nuevoNodo=new Nodo<T>(valor);
	head = nuevoNodo;
}
