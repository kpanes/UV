#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
class Cola{
	private:
		//Apuntador al primer eleemnto de la cola
		Nodo<T> *inicio;
		//Apuntador al ultimo elemento de la cola
		Nodo<T> *fin;
	public:
		Cola();
		~Cola();
		//Encabezados delas operaciones basicas y complementarias
		bool estaVacia();
		void insertar(const T &val);
		T obtenerElemento();
		void recorrer();
		void eliminar();
		int tamanio();
		//Operaciones complementarias
		T obtenerUltimo();
		void eliminarUltimo();
		void limpiar();
		T copiar();
};
//Implementacion de los metodos o funciones

//Constructor
template <typename T>
Cola<T>::Cola(){
	inicio=NULL;
	fin=NULL;
}

//Destructor
template <typename T>
Cola<T>::~Cola(){
}

//Verifica si la lista esta vacia
template <typename T>
bool Cola<T>::estaVacia(){
	return inicio==NULL;
}

//Crea un nuevo nodo con el valor proporcionado
template <typename T>
void Cola<T>::insertar(const T &val){
	//Se crea el nuevo nodo con el valor proporcionado
	Nodo<T> *nuevoNodo = new Nodo<T>(val);
	if(inicio==NULL){ //Si la lista esta vacia
		inicio=nuevoNodo;
		fin=nuevoNodo;
	}else{//Si la cola no esta vacia
		/*
		se actualiza el puntero sig del ultimo nodo actual para
		que apunte al nuevo nodo (nuevoNodo). Esto establece la
		conexion entre el ultimo nodo existente y el nuevo nodo
		que se esta agregando
		*/
		fin->sig=nuevoNodo;
		//Se actualiza el puntero fin para que apunte al nuevo nodo (nuevoNodo)
		fin = nuevoNodo;
	}
}

// Obtiene y devuelve el primer elemento
template <typename T>
T Cola<T>::obtenerElemento(){
	if(inicio !=NULL){ //Verificar que la cola no este vacia
	// Retorna el valor almacenado en el primer nodo
		return inicio->val;
	}else{ // Si esta vacia, retorna un -1
		return -1;
	}
}

// Recorre toda la lista<<
template <typename T>
void Cola<T>::recorrer(){
	if(inicio != NULL){
		Nodo<T> *temp=inicio;
	}else{
		cout<<"La lista esta vacia"<<endl;
	}
	cout<<endl;
}

// Eliminar
template <typename T>
void Cola<T>::eliminar(){
	if(inicio !=NULL){ //Verificar que la lista no este vacia
// Crear un nodo temporal que apunt a inicio
		Nodo<T> *temp=inicio;
		if(inicio == fin){ // Verficar si solo hay un nodo
			temp=inicio;
			inicio=NULL;
			fin=NULL;
			delete temp;
		}else{
		inicio=inicio->sig;
		delete temp;
		}
	}
}

template <typename T>
int Cola<T>::tamanio(){
	if(inicio !=NULL){
		Nodo<T> *temp = inicio;
		int cont=0;
		while(temp !=NULL){
			cont=cont+1;
			temp=temp->sig;
		}
		return cont;
	}else{
		return 0;
	}
}

// OPERACIONES COMPLEMENTARIAS
template <typename T>
T Cola<T>::obtenerUltimo(){
	if(inicio !=NULL){
		return fin->val;
	}else{
		return -1;
	}
}

template <typename T>
void Cola<T>::eliminarUltimo(){
	if(inicio !=NULL){ //Verifica que la lista no este vacia
		if(inicio == fin){ //verfica que la lista tenga un solo nodo
			delete inicio;
			fin = NULL;
			inicio = NULL;
		}else{ //si hay mas de un elemento
			Nodo<T> *penultimo = inicio;
			while(penultimo->sig !=fin){
				penultimo = penultimo->sig;
			}
			delete fin;
			fin = penultimo;
		}
	}
}

template <typename T>
void Cola<T>::limpiar(){
	while(inicio !=NULL){
		Nodo<T> *temp=inicio;
		inicio=inicio->sig;
		delete temp;
	}
	inicio = NULL;
	fin = NULL;
}

template <typename T>
T Cola<T>::copiar(){
	Cola<T> copia;
	Nodo<T> *temp = inicio;
	while(temp != NULL){
		copia.insertar(temp->val);
		temp = temp->sig;
	}
}

/*Al utilizar punteros, se pueden modificar los datos por medio del apuntador ya que se
esta operandodesde la posicion de memoria del objeto*/
