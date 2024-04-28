package vehiculo;

public class VehiculoFurgoneta extends Practicas
{
    private int carga;

    public VehiculoFurgoneta(int carga, String matricula, String modelo, String marca)
    {
        super(matricula, marca, modelo);
        this.carga = carga;
    }

    public int getCarga()
    {
       return carga;
    }

    @Override
    public String mostrarDatos() {
        return  "Matricula: "+matricula+"\nMarca: "+marca+"\nMOdelo: "+modelo+"\nCarga: "+carga;
    }
}
