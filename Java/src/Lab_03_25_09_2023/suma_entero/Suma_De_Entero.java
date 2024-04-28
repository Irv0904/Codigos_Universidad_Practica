package Lab_03_25_09_2023.suma_entero;

import java.io.IOException;

public class Suma_De_Entero
{
    public static void main (String[]  args) throws IOException
    {
        int c, suma= 0;
        for (c = 2; c <= 50 ; c++)
        {
            if(c % 2 == 0)
            {
                System.out.print (c+"\n");
                suma = suma + c;
            }
        }
        System.out.println("\nLa suma total es: "+suma);
    }
}
