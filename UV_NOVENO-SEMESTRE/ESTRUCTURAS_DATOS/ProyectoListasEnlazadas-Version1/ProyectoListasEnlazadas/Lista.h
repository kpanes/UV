#include <iostream>
#include "Nodo.h"
#include "Alumno.h"
using namespace std;
template <typename T>
class Lista{
	private:
		Nodo<T> *head;//Apuntador al primer elemento de la lista
		void recorrerRecursivo(Nodo<T> *nodoActual);
		
	public:
		Lista();
		~Lista();
		//OPERACIONES BASICAS
		void insertarInicio(const T &valor);
		bool estaVacia();
		void recorrerLista();
		T obtenerElemento(int indice);
		void eliminar(const T &valor);
		void insertarFinal(const T &valor);
		void insertarAntes(int indice,const T &valor);
		void eliminarInicio();
		void recorrerRecursivo();
		//OPERACIONES COMPLEMENTARIAS
		void eliminarFinal();
		//void insertarDespues(int indice, const T &valor);
		void eliminarIndice(int indice);
		//void recorridoInverso();
		void registrarAlumno(const T &alumno);
};
template <typename T>
Lista<T>::Lista(){
	head=NULL;
}

// Implementación del método registrarAlumno
template <typename T>
void Lista<T>::registrarAlumno(const T &alumno) {
    // Crear un nuevo nodo con el alumno proporcionado
    Nodo<T> *nuevoNodo = new Nodo<T>(alumno);

    // Insertar el nuevo nodo al inicio de la lista
    nuevoNodo->setSiguiente(head);
    head = nuevoNodo;

    cout<<"Alumno registrado exitosamente"<<endl;
}
