package vehiculo;

public class Main
{
    public static void main(String [] args)
    {
        Practicas misVehiculos[] = new Practicas[4];

        misVehiculos[0] = new Practicas("cx8686", "Ferrari", "A89");
        misVehiculos[1] = new VehiculoTurismo(4,"cx867","Audi", "MG");
        misVehiculos[2] = new VehiculoDeportivo(200,"cx9696","Lambo","Urus");
        misVehiculos[3] = new VehiculoFurgoneta(2000,"cx8676","Hyundai", "Creta");
        for(Practicas practicas:misVehiculos)
        {
            System.out.println(practicas.mostrarDatos());
            System.out.println(" ");
        }
    }
}
