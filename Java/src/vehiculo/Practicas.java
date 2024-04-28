package vehiculo;
public class Practicas
{
    protected String matricula;
    protected String marca;
    protected String modelo;

    public Practicas(String matricula, String marca, String modelo)
    {
        this.marca = marca;
        this.matricula = matricula;
        this.modelo = modelo;
    }

    public String getMatricula()
    {
        return matricula;
    }

    public String getMarca()
    {
        return marca;
    }
    public String getModelo()
    {
        return modelo;
    }

    public String mostrarDatos()
    {
        return  "Matricula: "+matricula+"\nMarca: "+marca+"\nModelo: "+modelo;
    }
}
