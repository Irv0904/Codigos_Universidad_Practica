package Lab_01_18_09_2023.prog_1_factorial;
import java.util.Scanner;


public class Factorial_de_un_numero
{
    public static void main(String[] args)
    {
        Scanner teclado = new Scanner(System.in);
        int fact = 1;
        int num = 0;
        System.out.println("Introduce un numero");
        num = teclado.nextInt();
        for(int ind = 1; ind <= num; ind++)
        {
            fact *= ind;
        }
        System.out.println("El factorial es: "+fact);
    }
}