#include <iostream>
using namespace std;

//Funcion para recorrer un arrego de manera recursiva

void impArreglo(int A[], int N){
	if(N !=0){
		impArreglo(A,N-1);
		cout<<A[N-1]<<endl;
	}
}

int main(int argc, char** argv){
	const int N=10;
	int A[N]={1,2,3,4,5,6,7,8,9,10};
	impArreglo(A,N);
	return 0;
}
