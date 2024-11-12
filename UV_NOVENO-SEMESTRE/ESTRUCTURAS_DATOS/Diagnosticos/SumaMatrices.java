import java.util.Scanner;

public class SumaMatrices {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Declaración de matrices
        int[][] matrizA = new int[2][2];
        int[][] matrizB = new int[2][2];
        int[][] matrizC = new int[2][2];

        //elementos de la matriz A
        System.out.println("Ingrese los elementos de la matriz A:");
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                System.out.print("Matriz A[" + i + "][" + j + "]: ");
                matrizA[i][j] = scanner.nextInt();
            }
        }

        //elementos de la matriz B
        System.out.println("Ingrese los elementos de la matriz B:");
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                System.out.print("Matriz B[" + i + "][" + j + "]: ");
                matrizB[i][j] = scanner.nextInt();
            }
        }

        // Suma de matrices A y B
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }

        // Mostrar resultado
        System.out.println("La matriz resultante C es:");
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                System.out.print(matrizC[i][j] + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}
