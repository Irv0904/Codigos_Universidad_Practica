package documentos;

public class Documento
{
   protected String ciudad;
   protected String fecha;
   protected String cuerpo;
   protected String despedida;
   protected String firma;

   public Documento(String ciudad, String fecha, String cuerpo, String despedida, String firma)
   {
       this.fecha = fecha;
       this.ciudad = ciudad;
       this.cuerpo = cuerpo;
       this.firma = firma;
       this.despedida = despedida;
   }

    public String getCiudad() {
        return ciudad;
    }

    public String getFecha() {
        return fecha;
    }

    public void setCuerpo(String cuerpo) {
        this.cuerpo = cuerpo;
    }

    public String getFirma() {
        return firma;
    }

    public void setDespedida(String despedida) {
        this.despedida = despedida;
    }

    public String mostrarDatos()
    {
        return "\t\t"+fecha+"\n"+ciudad+"\n"+cuerpo+"\n"+despedida+"Atentamente: "+firma;
    }
}
