#include <iostream>
#include "Cola.h"
using namespace std;

int main(int argc, char** argv){
	Cola <int> c;
	c.insertar(10);
	c.insertar(20);
	c.insertar(30);
	c.recorrer();
	cout<<c.obtenerUltimo()<<endl;
	c.eliminarUltimo();
	c.recorrer();
	c.limpiar();
	c.copiar();
	return 0;
}
