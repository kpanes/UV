#include <iostream>
using namespace std;

int numMayor();

int numMayor(const int arr[], int size) {
	int maximo = arr[0];
	
	for(int i=1;i<size;++i) {
		if(arr[i>maximo]) {
			maximo=arr[i];
		}
	}
	return maximo;
}
	
int main(){
	int arr[10]={2,5,9,10,45,92,74,23,88,155};
	int size=10;
		
	int maximo = numMayor(arr, size);
		
	cout<<"El numero mas grande es: "<<maximo<<"\n";
		
	return 0;
}
