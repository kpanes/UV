#include <iostream>
#include <cstring>
using namespace std;

void manipularCaracteres(){
    const int MAX_LENGTH = 10;
    char cadena1[MAX_LENGTH];
    char cadena2[MAX_LENGTH];
    char resultado[MAX_LENGTH * 2];

	cout<< "Ingrese la primera cadena: "<<endl;
    cin.getline(cadena1, MAX_LENGTH);

    cout << "Ingrese la segunda cadena: "<<endl;
    cin.getline(cadena2, MAX_LENGTH);

    char *ptrResultado = resultado;
    const char *ptrCadena1 = cadena1;
    const char *ptrCadena2 = cadena2;
	
	//copia la primera acdena
    while (*ptrCadena1 != '\0') {
        *ptrResultado = *ptrCadena1;
        ptrResultado++;
        ptrCadena1++;
    }

	//copia la segunda cadena
    while (*ptrCadena2 != '\0') {
        *ptrResultado = *ptrCadena2;
        ptrResultado++;
        ptrCadena2++;
    }

    *ptrResultado = '0';

    cout<<"La cadena concatenada resultante es: "<<resultado<<endl;

}

void convertirCaracteres() {
    const int MAX_LENGTH = 10;
    char cadena[MAX_LENGTH];

    cout<<"Ingrese una cadena en letras mayusculas: "<<endl;
    cin.getline(cadena, MAX_LENGTH);

    // Convertir a minusculas
    char *ptrCadena = cadena;
    while (*ptrCadena != '0') {
        if (*ptrCadena >= 'A' && *ptrCadena <= 'Z') {
            *ptrCadena = *ptrCadena + ('a' - 'A');//si es una mayuscula la convierte a minuscula
        }
        ptrCadena++;
    }

    cout<<"La cadena en minúsculas es: "<<cadena<<endl;
}

void buscarNumero() {
    const int tamano = 10;
    int numeros[tamano] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int numeroBuscado;
    cout<<"Ingrese el numero que desea buscar: "<<endl;
    cin>>numeroBuscado;

    int *ptrNumero =NULL;//puntero que va a recorrer el array
    int posicion = -1;

    for (int i = 0; i < tamano; i++) {
        if (numeros[i] == numeroBuscado) {
            ptrNumero = &numeros[i]; //guarda la direccion del numero
            posicion = i; //guarda la posision del numero
            break; //sale del bucle al encontrarlo
        }
    }

    if (posicion != -1) {
        cout<<"El numero "<<numeroBuscado<<" se encuentra en la posicion "<<posicion<<" del array"<<endl;
        cout<<"Su direccion en memoria es: "<<ptrNumero<<endl;
    } else {
        cout<<"El numero "<<numeroBuscado<<"no se encuentra en el array"<<endl;
    }

}

void ordenarNumeros(){
    const int tamano = 10;
    int numeros[tamano] = {12, 5, 8, 9, 3, 20, 15, 6, 10, 1};

    cout<< "Arreglo original: "<<endl;
    for (int i = 0; i < tamano; i++) {
        cout<< numeros[i]<< " "<<endl;
    }

    cout<< "Arreglo ordenado de mayor a menor: "<<endl;
    for (int i = 0; i < tamano; i++) {
        cout<<numeros[i]<< " "<<endl;
    }
}

int main(int argc, char** argv){
	manipularCaracteres();
	//convertirCaracteres();
	//buscarNumero();
	//ordenarNumeros();
	
	return 0;
}
