package vehiculo;

public class VehiculoTurismo extends Practicas
{
    private int nPUertas;
    public VehiculoTurismo(int nPUertas, String matricula, String marca, String modelo)
    {
        super(matricula, marca, modelo);
        this.nPUertas = nPUertas;
    }

    public int getnPUertas()
    {
        return nPUertas;
    }

    @Override
    public String mostrarDatos() {
        //return super.mostrarDatos();
        return  "Matricula: "+matricula+"\nMarca: "+marca+"\nMOdelo: "+modelo+"\nNumero de puertas: "+nPUertas;
    }
}
