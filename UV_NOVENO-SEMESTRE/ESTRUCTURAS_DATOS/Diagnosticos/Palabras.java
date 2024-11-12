import java.util.Scanner;

public class Palabras {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Escribe un texto: ");
        String texto = scanner.nextLine();

        int totalPalabras = contarPalabras(texto);
        int totalOraciones = contarOraciones(texto);
        String palabraMasLarga = encontrarPalabraMasLarga(texto);

        System.out.println("Número total de palabras: " + totalPalabras);
        System.out.println("Número de oraciones: " + totalOraciones);
        System.out.println("Palabra más larga: " + palabraMasLarga);

        scanner.close();
    }

    public static int contarPalabras(String texto) {
        String[] palabras = texto.split("\\s+");
        return palabras.length;
    }

    public static int contarOraciones(String texto) {
        String[] oraciones = texto.split("\\.");
        return oraciones.length;
    }

    public static String encontrarPalabraMasLarga(String texto) {
        String[] palabras = texto.split("\\s+");
        String palabraMasLarga = "";

        for (String palabra : palabras) {
            if (palabra.length() > palabraMasLarga.length()) {
                palabraMasLarga = palabra;
            }
        }

        return palabraMasLarga;
    }
}
