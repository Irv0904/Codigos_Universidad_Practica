package Lab_01_18_09_2023.prog_3_leer_datos.prog_4_leer_nombre;
import java.util.Scanner;

public class Leer_nombre 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		String cadena;
		System.out.println("Introduzca un nombre: ");
		cadena = sc.nextLine();
		System.out.println("Buenos dias "+cadena);
	}
}
