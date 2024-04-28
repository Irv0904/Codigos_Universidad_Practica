package documentos;

public class Carta  extends Documento
{
    private String saludo;
    private String postData;

    public Carta(String postData,String saludo, String ciudad, String fecha, String cuerpo, String Despedida, String firma)
    {
        super(ciudad, fecha, cuerpo, Despedida, firma);
        this.saludo = saludo;
        this.postData = postData;
    }

    public String getSaludo() {
        return saludo;
    }

    public String getPostData() {
        return postData;
    }

    @Override
    public String mostrarDatos() {
        return ""+fecha+"\t\t"+ciudad+"\n\n"+saludo+"\n\n"+cuerpo+"\n"+despedida+"\n\npostdata: "+postData+"\n\nAtentamente: "+firma+"\n\n\n\t\t\tInforme";
    }
}
