// Asignacion de memoria dinamica a una cadena

#include <iostream>
#include <cstring>
using namespace std;

asignacionDinamica() {
	char *p;
	p = new char[80];
	strcpy(p, "Muestra la asignacion dinamica de una cadena de caracteres");
	cout<<p<<endl;
	delete p;
	cout<<"Pulse intro para continuar"<<endl;
	cin.get();
}

copiarCadena(){
	char *cad = "Sierras de Carzola, Segura y Magina";
	int lon = strlen(cad);
	char *ptr;
	ptr = new char[lon+1];
	strcpy(ptr, cad); // copia cad a una anueva area de memoria apuntada por ptr
	cout<<endl<<"ptr = "<<ptr; // cad esta ahora en ptr
	delete ptr; // libera memoria de ptr
}

arregloDinamico(){
	cout<<"¿Cuantos elementos necesita en su arreglo?";
	int lon;
	cin>>lon;
	int *miArray = new int[lon];
	for(int n=0; n<lon; n++){
		miArray[n] = n+1;
	}
	
	for(int n=0; n<lon; n++){
		cout<<endl<<miArray[n];
	}
	delete[] miArray;
}

int main(int argc, char** argv){
	//asignacionDinamica();
	//copiarCadena();
	arregloDinamico();
	return 0;
}
