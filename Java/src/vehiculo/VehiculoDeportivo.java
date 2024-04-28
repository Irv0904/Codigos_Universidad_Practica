package vehiculo;

public class VehiculoDeportivo extends Practicas{
    private int cilindra;

    public VehiculoDeportivo(int cilindra, String matricula, String marca, String modelo)
    {
        super(matricula, marca, modelo);
        this.cilindra = cilindra;
    }

    public int getCilindra() {
        return cilindra;
    }

    @Override
    public String mostrarDatos() {
        return  "Matricula: "+matricula+"\nMarca: "+marca+"\nMOdelo: "+modelo+"\nCilindra: "+cilindra;
    }
}