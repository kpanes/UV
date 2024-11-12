#include <iostream>
using namespace std;

template <typename T>
class Nodo{
	private:
		
	public:
		//Apuntadorees a la izquierda y derecha
		T val;
		Nodo *izq;
		Nodo *der;
		//Constructor
		Nodo(const T val){
			this-> val = val;
			izq = NULL;
			der = NULL;
		}
		~Nodo(){}//Desctructor
};
