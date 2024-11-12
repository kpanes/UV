import java.util.Scanner;
import java.util.regex.Matcher; //Para utilizar expresiones regulares
import java.util.regex.Pattern;

public class Comprobacion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingresa una expresión matemática: ");
        String expresion = scanner.nextLine();

        boolean esCorrecta = verificarExpresion(expresion);
        
        if (esCorrecta) {
            System.out.println("La expresión es correcta");
        } else {
            System.out.println("La expresión es incorrecta");
        }

        scanner.close();
    }

    public static boolean verificarExpresion(String expresion) {
        // Patrón para verificar la expresión matemática
        String patron = "^\\s*(-?\\d*\\.?\\d+)\\s*([+\\-*/%])\\s*(-?\\d*\\.?\\d+)\\s*$";
        Pattern pattern = Pattern.compile(patron);
        Matcher matcher = pattern.matcher(expresion);

        return matcher.matches();
    }
}
