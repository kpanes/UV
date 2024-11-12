#include <iostream>
using namespace std;

void transpMatriz(int matriz[3][3]) {
    int temp;

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

int main() {
    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
                        
	cout<<"Matriz original: "<<"\n";
                        
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout <<"\n";
    }

    transpMatriz(matriz);

    cout << "Matriz transpuesta:" <<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout <<"\n";
    }

    return 0;
}
