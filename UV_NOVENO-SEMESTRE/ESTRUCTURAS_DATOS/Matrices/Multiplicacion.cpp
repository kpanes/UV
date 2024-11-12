#include <iostream>
using namespace std;
void multMatriz();

int main(int argc, char** argv) {
	multMatriz();
	return 0;
}

void multMatriz() {
	const int filas=3;
	const int columnas=3;
	int matrizA[filas][columnas]={{1,2,3},{4,5,6},{7,8,9}};
	int matrizB[filas][columnas]={{9,8,7},{6,5,4},{3,2,1}};
	int matrizC[filas][columnas];
	
	cout<<"La multiplicacion de las matrices A * B es: "<<"\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matrizC[i][j]=matrizA[i][j]*matrizB[i][j];
		}
	}
	for(int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<matrizC[i][j]<<" ";
		}
		cout<<"\n";
	}
}
