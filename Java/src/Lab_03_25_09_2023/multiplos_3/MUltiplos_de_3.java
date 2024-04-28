package Lab_03_25_09_2023.multiplos_3;
import java.io.*;

public class MUltiplos_de_3
{
    public static void main (String[]  args) throws IOException
    {
        int c, suma= 0;
        for (c = 10 ; c <= 20 ; c++)
        {
            if(c % 3 == 0)
            {
            System.out.print (c+"\n");
            suma = suma + c;
            }
        }
        System.out.println("\nLa suma total es: "+suma);
    }
}
