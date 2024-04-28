package documentos;

public class Informe extends Documento
{
    private String titulo;
    private String indice;
    private String introduccion;
    private String referencia_bibliografia;
    private String anexos;
    private String objetivo;

    public Informe(String indice, String objetivo, String introduccion,String titulo, String referencia_bibliografia, String anexos , String ciudad, String fecha, String cuerpo, String despedida, String firma)
    {
        super(ciudad, fecha, cuerpo, despedida, firma);
        this.anexos = anexos;
        this.titulo = titulo;
        this.indice = indice;
        this.introduccion = introduccion;
        this.referencia_bibliografia = referencia_bibliografia;
        this.objetivo = objetivo;
    }

    public String getTitulo() {
        return titulo;
    }

    public String getReferencia_bibliografia() {
        return referencia_bibliografia;
    }

    public String getAnexos() {
        return anexos;
    }

    public String getIntroduccion() {
        return introduccion;
    }

    public String getObjetivo() {
        return objetivo;
    }

    @Override
    public String mostrarDatos() {
        return "\t\tTitulo: \n"+titulo+"\nIndice:\n"+indice+"\nIntroduccion: \n"+introduccion+"objetivo: \n"+objetivo+"\n\nContenido: \n"+cuerpo+"\n\nConclusion: \n"+despedida+"\n\nBibliografia: \n"+referencia_bibliografia+"\n\nAnexos: \n"+anexos;
    }
}
