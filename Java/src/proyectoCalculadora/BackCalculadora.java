package proyectoCalculadora;
//Importmos dos librerias
import javax.swing.*;
import java.awt.event.*;
//Creamos la clase e instaciamos la variable campo
public class BackCalculadora implements ActionListener{
    JTextField campo;
    //creamos 3 variables, un string y dos double.
    String operador = "";
    double num = 0.0;
    double num2 = 0.0;
    public BackCalculadora(JTextField campo)
    {
        this.campo = campo;
    }
    //se crea metodo llamado actionPerformed
    public void actionPerformed(ActionEvent e){
        String accion = e.getActionCommand();
        //si el usuario toco un botono de numero lo muestra y guarda en las variables
        switch (accion) {
            case "9", "8", "7", "6", "5", "4", "3", "2", "1", "0" -> campo.setText(campo.getText() + accion);

            //se es un signo hace la operacio
            case "/", "*", "-", "+" -> {
                operador = accion;
                num = Double.parseDouble(campo.getText());
                campo.setText(" ");
            }
            //si es igual muestra resultado
            case "=" -> {
                num2 = Double.parseDouble(campo.getText());
                double resultado = 0.0;
                //pregunta si el signo es /,*,-,+, y hara su operacion correspondiente
                switch (operador) {
                    case "/" -> {
                        /*si ek segundo numero es 0, tira error, porque anything divido a cero no tiene resultado o da error*/
                        if (num2 == 0) {
                           // campo.setText("Syntax Error");
                            JOptionPane.showMessageDialog(null,"no se puede dividir por cero");
                            return;
                        } else {
                            resultado = num / num2;
                        }
                        break;
                    }
                    case "*" -> {
                        resultado = num * num2;
                        break;
                    }
                    case "-" -> {
                        resultado = num - num2;
                        break;
                    }

                    case "+" -> {
                        resultado = num + num2;
                        break;
                    }
                }
                //si es ogual muestra el resultado
                campo.setText(Double.toString(resultado));
            }
            //si es boton c , limpia anything

            case "Ce" -> {
                String textoActual = campo.getText();
                if (!textoActual.isEmpty()) {
                    campo.setText(textoActual.substring(0, textoActual.length() - 1));
                }
            }
            //System.out.println("Botón Ce presionado");
            case "C" -> {
                campo.setText("");
                operador = "";
                num = 0.0;
                num2 = 0.0;
            }
        }
    }
}