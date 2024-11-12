#include <iostream>
using namespace std;
void sumarElementos();
void contarParesImpares();
void copiarArreglo();
void sumarMatrices();
int main(int argc, char** argv) {
	sumarElementos();
	contarParesImpares();
	copiarArreglo();
	sumarMatrices();
	return 0;
}

void sumarElementos() {
    const int size =5;
    int arr[size]={10,20,30,40,50};
    int suma=0;

    for(int i=0;i<size;i++){
        suma+=arr[i];
        //suma=suma+arr[i];
	}
		//cout<<arr<<end
}

void contarParesImpares() {
	const int size=6;
	int arr[size]={15,6,9,8,12,7};
	int contPares=0;
	int contImpares=0;
	
	for(int i=0;i<size;i++) {
		if(arr[i]%2==0){
			contPares++;
		}
		else{
			contImpares++;
		}
	}
	cout<< "Total de numeros pares: "<<contPares<<"\n";
	cout<< "Total de numero impares: "<<contImpares<<"\n";
}

void copiarArreglo() {
	const int size=4;
	int origen[size]={5,10,15,20};
	int destino[size];
	
	for(int i=0;i<size;i++){
		destino[i]=origen[i];
	}
	
	cout<<"Elementos del arreglo destino: "<<"\n";
	for(int i=0;i<size;i++){
		cout<<destino[i]<<"\n";
	}
}

void sumarMatrices() {
	const int filas=3;
	const int columnas=3;
	int matrizA[filas][columnas]={{1,2,3},{4,5,6},{7,8,9}};
	int matrizB[filas][columnas]={{9,8,7},{6,5,4},{3,2,1}};
	int matrizC[filas][columnas];
	
	cout<<"La suma de las matrices A + B es: "<<"\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
		}
	}
	for(int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<matrizC[i][j]<<" ";
		}
		cout<<"\n";
	}
}
