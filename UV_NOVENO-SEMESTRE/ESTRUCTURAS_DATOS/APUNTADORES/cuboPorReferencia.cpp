#include <iostream>
using namespace std;

void cuboPorReferencia(int *nPtr){
	*nPtr=*nPtr* *nPtr* *nPtr; //se necesita un apuntador para almacenar el valor	
}

void intercambioValores(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	cout<<"Valor de x: "<<*x<<endl;
	cout<<"Valor de y: "<<*y<<endl;
}

int isNull(int *ptr){
	if(ptr==NULL){
		cout<<"Apuntador nulo"<<endl;
		return 0;
	}else{
		cout<<"Apuntador no nulo"<<endl;
	}
}

void elevarCuadrado(int *num){
	*num=*num* *num;
}

void recorrerArreglo(){
	const int tam=5;
	int arreglo[]={10,20,30,40,50};
	int *ptr=arreglo;
	//cout<<arreglo[1]<<"-> "<<ptr<<endl;
	//cout<<arreglo[1]<<"-> "<<&arreglo[0]<<endl;
	cout<<arreglo+tam<<endl; //me da la ultima direccion
	cout<<&arreglo[4]+1<<endl;
	while(ptr<arreglo+tam){
		cout<<*ptr<<"-> "<<ptr<<endl;
		ptr++;
	}
}

void copiarArreglo(){
	int arregloOriginal[]={10,20,30,40,50};
	int arregloCopia[5];
	int *ptrOriginal=arregloOriginal;
	int *ptrCopia=arregloCopia;
	
	cout<<ptrOriginal<<endl;
	cout<<ptrCopia<<endl;
	
	while(ptrOriginal<arregloOriginal+5){
		//cout<<*ptrOriginal<<endl;
		*ptrCopia=*ptrOriginal;
		ptrOriginal++;
		ptrCopia++;
	}
	cout<<"Arreglo copia"<<endl;
	for(int i=0;i<5;i++){
		cout<<arregloCopia[i]<<endl;
	}
}

void tamanioCadena(const char *cad){
	int cont=0;
	while(*cad){
		cout<<cad<<endl;
		cont++;
		cad++;
	}
}

void invertirCadena(){
	char cadena[]="Hola";
	char *ptr=cadena;
	while(*ptr !=0){
		ptr++;
	}
	
	while(ptr>cadena){
		ptr--;
		cout<<*ptr<<endl;
	}
}

int main(int argc, char** argv){
	/*int n=5;
	int x=10;
	int y=20;
	int z=3;
	cout<<"El valor original de n es: "<<n<<endl;
	cuboPorReferencia(&n);
	cout<<"Valor final de n es: "<<n<<endl;
	
	//#####INTERCAMBIO DE VALORES#####
	cout<<"Valor original de x: "<<x<<endl;
	cout<<"Valor original de y: "<<y<<endl;
	intercambioValores(&x,&y);
	//isNull(ptr);
	elevarCuadrado(&z);
	cout<<"Cuadrado de z: "<<z<<endl;
	recorrerArreglo();
	copiarArreglo();
	tamanioCadena("Hola mundo");*/
	invertirCadena();
	return 0;
}
