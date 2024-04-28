package Lab_04_02_10_2023.Empleado;
import java.util.*;

public class Empleado {
    Scanner entrada = new Scanner(System.in);
    protected String nombre;
    protected String nempleado;
    protected int salario;

    public Empleado() {
        // Solicitar datos al usuario
        System.out.print("Ingrese el nombre del empleado: ");
        this.nombre = entrada.nextLine();
        System.out.print("Ingrese el número de empleado: ");
        this.nempleado = entrada.nextLine();
        System.out.print("Ingrese el salario del empleado: ");
        this.salario = entrada.nextInt();
    }

    public void obtener_datos() {
        System.out.println("El nombre del empleado es: " + nombre);
        System.out.println("Número de empleado: " + nempleado);
        System.out.println("El salario del empleado es: " + salario);
    }

    public void procesar_salario() {
        System.out.println("El salario del empleado es: " + salario);
    }
}