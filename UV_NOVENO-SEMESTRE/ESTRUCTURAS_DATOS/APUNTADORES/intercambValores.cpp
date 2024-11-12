//Intercambio de valores
//Escribe un programa que intercambie los valores de dos variables enteras utilizando apuntadores
#include <iostream>
using namespace std;

void intercambioValores(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	cout<<"Valor de x: "<<*x<<endl;
	cout<<"Valor de y: "<<*y<<endl;
}

int main(int argc, char** argv){
	int x=10;
	int y=20;
	cout<<"Valor original de x: "<<x<<endl;
	cout<<"Valor original de y: "<<y<<endl;
	intercambioValores(&x,&y);
	return 0;
	
}
