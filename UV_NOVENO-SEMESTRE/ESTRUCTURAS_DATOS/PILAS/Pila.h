#include <iostream>
#include "Nodo.h"
#include <limits>
using namespace std;

template <typename T>
class Pila{
	private:
		//Apuntador a la cima de la pila
		Nodo<T> *top;
		Nodo<T> *fin;
	public:
		Pila();
		~Pila();
		//Operaciones basicas
		void insertar(const T &valor);
		/*T obtenerElemento();
		void eliminar();
		bool estaVacia();
		void recorrer();*/
		//Operaciones complementarias
		int tamanio();
		void limpiar();
		T encontrarNumeroMayor() const;
		void invertirPila();
};

//Implementacion de operaciones basicas

//Constructor
template <typename T>
Pila<T>::Pila(){
	top == NULL;
}

//Destructor
template <typename T>
Pila<T>::~Pila(){
	Nodo<T> *temp = top;
	while( temp !=NULL){
		//Guarda la referencia al siguiente nodo
		Nodo<T> *siguiente = temp->sig;
		//Libera el nodo actual
		delete temp;
		//Avanza al siguiente nodo
		temp = siguiente;
	}
	top = NULL;
}

//-----OPERACIONES BASICAS----

//Inserta un elemento (push)
template <typename T>
void Pila<T>::insertar(const T &val){
	//Crea un nuevo nodo
	Nodo<T> *nuevoNodo = new Nodo<T>(val);
	if(top == NULL){ //verifica si la pila esta vacia
		top = nuevoNodo;
	}else{ //Si la pila no esta vacia
		nuevoNodo->sig = top;
		top = nuevoNodo;
	}
}

/*//Obtener el elemento tope de la Pila
template <typename T>
T Pila<T>::obtenerElemento(){
	if(top !=NULL){ //Verificar que la cola no este vacia
	// Retorna el valor almacenado en el primer nodo
		return top->val;
	}else{ // Si esta vacia, retorna un -1
		return -1;
	}
}

// Eliminar
template <typename T>
void Pila<T>::eliminar(){
	if(top !=NULL){ //Verificar que la lista no este vacia
// Crear un nodo temporal que apunt a inicio
		Nodo<T> *temp=top;
		if(top == fin){ // Verficar si solo hay un nodo
			temp=top;
			top=NULL;
			fin=NULL;
			delete temp;
		}else{
		top=top->sig;
		delete temp;
		}
	}
}

//Comprobar si la Pila esta vacia
template <typename T>
bool Pila<T>::estaVacia(){
	return top==NULL;
}

// Recorrer la pila
template <typename T>
void Pila<T>::recorrer(){
	if(top != NULL){
		Nodo<T> *temp=top;
	}else{
		cout<<"La pila esta vacia"<<endl;
	}
	cout<<endl;
}*/

//------OPERACIONES COMPLEMENTARIAS-----

//Obtener el tamaño de la pila
template <typename T>
int Pila<T>::tamanio(){
	if(top !=NULL){
		Nodo<T> *temp = top;
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

//Limpia todos los elementos de la pila
template <typename T>
void Pila<T>::limpiar() {
    Nodo<T> *temp = top;
    while (temp != NULL) {
        Nodo<T> *siguiente = temp->sig;
        delete temp;
        temp = siguiente;
    }
    top = NULL; // Establecer top como NULL para indicar que la pila está vacía
}

template <typename T>
T Pila<T>::encontrarNumeroMayor() const {
    if (estaVacia()) {
        // Si la pila está vacía, lanzar una excepción o devolver un valor predeterminado según lo que prefieras
        throw runtime_error("La pila está vacía.");
    }

    T numeroMayor = std::numeric_limits<T>::min(); // Inicializar el número mayor con el valor mínimo posible para el tipo T
    Nodo<T> *temp = top;

    while (temp != NULL) {
        if (temp->dato > numeroMayor) {
            numeroMayor = temp->dato;
        }
        temp = temp->sig;
    }

    return numeroMayor;
}

template <typename T>
void Pila<T>::invertirPila() {
    if (estaVacia()) {
        // Si la pila está vacía, no hay elementos para invertir
        return;
    }

    Nodo<T> *anterior = NULL;
    Nodo<T> *actual = top;
    Nodo<T> *siguiente = NULL;

    while (actual != NULL) {
        // Guardar el siguiente nodo
        siguiente = actual->sig;
        // Invertir el puntero al siguiente nodo
        actual->sig = anterior;
        // Mover los punteros al siguiente nodo en la pila
        anterior = actual;
        actual = siguiente;
    }
    // Establecer la nueva cima de la pila
    top = anterior;
}
