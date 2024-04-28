package Lab_03_25_09_2023.suma_doble;

import java.io.*;

public class Suma_Cuadrado
{
    static int n;
    static  double num;
    static int sum;
    static int Sumatoria (int N, double NUM)
    {
        int s = 0, s1;
        s1 = (int) (Math.pow(num,2));
        s = (n+n)+ s1;
        return s;
    }
    public static void main (String[]  args) throws IOException
    {
        String dato, dato1;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt(dato);
        System.out.println("Imprima el segundo numero: ");
        dato1 = br.readLine();
        num = Double.parseDouble (dato1);
        sum = Sumatoria (n,num);
        System.out.println ("\n\n La suma es " + sum);
    }
}
