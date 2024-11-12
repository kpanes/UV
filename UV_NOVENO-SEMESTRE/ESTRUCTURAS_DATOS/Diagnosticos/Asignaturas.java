import java.util.ArrayList;
import java.util.Scanner;

public class Asignaturas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String[] asignaturas = {"Matematicas", "Fisica", "Quimica", "Historia", "Lenguaje"};
        ArrayList<String> asignaturasRepetir = new ArrayList<>();

        for (String asignatura: asignaturas) {
            System.out.println("Ingresa la calificacion obtenida en " + asignatura + ": ");
            double nota = scanner.nextDouble();

            if(nota <6.0) {
                asignaturasRepetir.add(asignatura);
            }
        }

        System.out.println("Asignaturas a repetir:");

        for(String asignatura : asignaturasRepetir) {
            System.out.println(asignatura);
        }
    }
}
