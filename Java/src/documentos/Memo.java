package documentos;

public class Memo extends Documento
{
    private String asunto;
    private String de;
    private String para;

    public Memo(String de,String para,String asunto, String ciudad, String fecha, String cuerpo, String despedida, String firma)
    {
        super(ciudad, fecha, cuerpo, despedida, firma);
        this.asunto = asunto;
        this.de = de;
        this.para = para;
    }

    public String getAsunto() {
        return asunto;
    }

    public String getDe() {
        return de;
    }

    public String getPara() {
        return para;
    }

    @Override
    public String mostrarDatos() {
        return "Fecha: "+fecha+"\n"+ciudad+"\nde: "+de+"\npara: "+para+"\nAsunto: "+asunto+"\n\n"+cuerpo+"\n"+despedida+"Atentamente: "+firma;
    }
}
