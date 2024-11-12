#include <iostream>
#include "Alumno.h"
#include "Materia.h"
#include "Horario.h"
using namespace std;
template<typename T>
class Nodo {
	private:
		
	public:
		T valor;
		Nodo *next;
		Nodo(T val){
			this->valor=val;
			next=NULL;
		}
		~Nodo(){
		}
};
