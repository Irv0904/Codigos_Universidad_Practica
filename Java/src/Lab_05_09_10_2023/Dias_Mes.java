package Lab_05_09_10_2023;
import java.util.Scanner;

public class Dias_Mes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x, mes, dias = 0;
        int aa = 2017;

        System.out.print("¿Qué mes desea? ");
        mes = scanner.nextInt();

        // Usar un switch para determinar los días en cada mes
        switch (mes) {
            case 1:  // Enero
            case 3:  // Marzo
            case 5:  // Mayo
            case 7:  // Julio
            case 8:  // Agosto
            case 10: // Octubre
            case 12: // Diciembre
                dias = 31;
                break;
            case 4:  // Abril
            case 6:  // Junio
            case 9:  // Septiembre
            case 11: // Noviembre
                dias = 30;
                break;
            case 2:  // Febrero
                // Verificar si es un año bisiesto
                if ((aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0)) {
                    dias = 29;
                } else {
                    dias = 28;
                }
                break;
            default:
                System.out.println("Mes inválido");
                return;
        }

        for (x = 1; x <= dias; x++) {
            System.out.print(x + "\t");
            if (x % 7 == 0) {
                System.out.println();
            }
        }
    }
}
