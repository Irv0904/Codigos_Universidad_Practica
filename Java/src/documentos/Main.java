package documentos;

import java.util.*;

public class Main
{
    public static void main(String [] args)
    {
        int tipo_documento;
        Scanner teclado = new Scanner(System.in);

        Documento misDocumentos[] = new Documento[3];

        System.out.println("Seleccione el tipo de documento que necesita leer:\n1-Carta\n2-Informe\n3-Memo\n4-Los tres documentos\nRespuesta:");
        tipo_documento = teclado.nextInt();
        if(tipo_documento == 1)
        {
                misDocumentos[0] = new Carta("Te quiero Mucho", "Hola querido amigo, Como estas", "Panamà, San Miguelito", "13-10-2023", "Hola, espero que estes bien, te he mandado esta carta para saludarte y preguntar por tu familia", "Espero vernos pronto", "Irving J. Villarreal L.\n\nInforme");
                System.out.println(misDocumentos[0].mostrarDatos());
        } else if (tipo_documento == 2) {
                misDocumentos[0] = new Informe("pag 1...\t\t\t Introduccion\npag 2...\t\t\t Objetivo\npag 3...\t\t\t Contenido\npag 4...\t\t\t Conclusion\npag 5...\t\t\t Bibliografia\npag 6...\t\t\t Anexo\n","El objetivo de este informe es familiarizar a los lectores con las características más destacadas de Java y su importancia en el desarrollo de software.","Java es un lenguaje de programación ampliamente utilizado en la industria de la tecnología. Este informe proporciona una visión general de Java, \nsus características clave y su relevancia en el mundo de la programación.\n" +
                        "\n", "Informe sobre el Lenguaje de Programación Java\n" +
                        "\n","https://www.java.com/es/","https://www.oracle.com/cl/","Panama, Marbella","13-10-2023","Java se utiliza en una variedad de aplicaciones, desde aplicaciones de escritorio hasta desarrollo web y móvil. ","ava es un lenguaje de programación ampliamente adoptado que ha demostrado su valía en una amplia variedad de aplicaciones.","Irving Villarreal");
                System.out.println(misDocumentos[0].mostrarDatos());
        }
        else if(tipo_documento == 3)
        {
            misDocumentos[0] = new Memo("Irving Villarreal","Jenny Rios","Fin de Contrato", "Panamà, Calidonia", "13-10-2023","Por medio de este memo, quiero informarte que estoy dejando mi posición de estudiante. Ha sido un placer trabajar aquí y formar parte de este equipo increíble.","Gracias a todos por su apoyo y colaboración. Espero mantener el contacto en el futuro.\n" +
                    "\n","Irving J. Villarreal L.");
            System.out.println(misDocumentos[0].mostrarDatos());
        }
        else
        {
            misDocumentos[0] = new Carta("Te quiero Mucho", "Hola querido amigo, Como estas", "Panamà, San Miguelito", "\t\t\tCarta\n\n13-10-2023\n\n", "Hola, espero que estes bien, te he mandado esta carta para saludarte y preguntar por tu familia", "Espero vernos pronto", "Irving J. Villarreal L.");
            misDocumentos[1] = new Informe("pag 1...\t\t\t Introduccion\npag 2...\t\t\t Objetivo\npag 3...\t\t\t Contenido\npag 4...\t\t\t Conclusion\npag 5...\t\t\t Bibliografia\npag 6...\t\t\t Anexo\n","El objetivo de este informe es familiarizar a los lectores con las características más destacadas de Java y su importancia en el desarrollo de software.","Java es un lenguaje de programación ampliamente utilizado en la industria de la tecnología. Este informe proporciona una visión general de Java, \nsus características clave y su relevancia en el mundo de la programación.\n" +
                    "\n", "Informe sobre el Lenguaje de Programación Java\n" +
                    "\n","https://www.java.com/es/","https://www.oracle.com/cl/","Panama, Marbella","13-10-2023","Java se utiliza en una variedad de aplicaciones, desde aplicaciones de escritorio hasta desarrollo web y móvil. ","ava es un lenguaje de programación ampliamente adoptado que ha demostrado su valía en una amplia variedad de aplicaciones.","Irving Villarreal");
            misDocumentos[2] = new Memo("Irving Villarreal","Jenny Rios","Fin de Contrato", "Panamà, Calidonia", "\n\n\t\tMemo\n\n13-10-2023","Por medio de este memo, quiero informarte que estoy dejando mi posición de estudiante. Ha sido un placer trabajar aquí y formar parte de este equipo increíble.","Gracias a todos por su apoyo y colaboración. Espero mantener el contacto en el futuro.\n" +
                    "\n","Irving J. Villarreal L.");
            for(Documento practicas:misDocumentos)
            {
                System.out.println(practicas.mostrarDatos());
                System.out.println(" ");
            }
        }
    }
}