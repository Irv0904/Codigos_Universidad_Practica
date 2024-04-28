package Lab_03_25_09_2023.yardas;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Yardas
{
    static double n;
    static double sum;
    static double Sumatoria (double N)
    {
        double s = 0, yardas = 3, pulgada = 12,metro = 0.3048;
        s = n / yardas;
        pulgada = n * pulgada;
        metro = n * metro;
        System.out.println("EL resultado de convertidor es: \nPies = "+n);
        System.out.println("pies a yarda es igual a = "+s+"\npies a pulgada es igual a ="+pulgada+"\npies a metros es igual a = "+metro);

        return s;
    }
    public static void main (String[]  args) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);
        System.out.println ("Cuatos pies va a medir: ");
        dato = br.readLine ();
        n = Double.parseDouble (dato);
        sum = Sumatoria (n);
    }
}
