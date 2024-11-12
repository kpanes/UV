#include <iostream>
#include "Lista.h"
using namespace std;

int main(int argc, char** argv) {
	Lista<int> lista;
	//Lista<char> listaC;
	lista.inserInicio(10);
	lista.inserInicio(20);
	lista.inserInicio(30);
	cout<<lista.estaVacia()<<endl;
	return 0;
}
