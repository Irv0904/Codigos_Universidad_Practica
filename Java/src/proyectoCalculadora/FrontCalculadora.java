package proyectoCalculadora;
import java.awt.*;
import javax.swing.*;

public class FrontCalculadora extends JFrame{
    JPanel Areabt; 
    JPanel texto; 
    JTextField muestra;
    BackCalculadora actionE;

    //PARTE DE YAIR
    public FrontCalculadora(String titulo){
        super(titulo); 
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new BorderLayout()); //le da a la clase la disposición de los elementos
        //setLocationRelativeTo(null);
        setLocation(650,200);
        //setLocation(C);
        //panel de botones
        Areabt = new JPanel(new GridLayout(4,4,5,5));
        Areabt.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        add(Areabt, BorderLayout.CENTER); 
        Areabt.setBackground(Color.darkGray);

        JButton btclear = new JButton("C");
        btclear.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        btclear.setBackground(Color.GRAY);
        btclear.setBorderPainted(false);
        btclear.setForeground(Color.WHITE);
        btclear.setFont(new Font("Arial", Font.BOLD, 15));

        // Botón para eliminar un carácter (<-) con etiqueta "Ce"
        JButton btborrar = new JButton("Ce");
        btborrar.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        btborrar.setFont(new Font("Arial", Font.PLAIN, 15));
        btborrar.setBackground(Color.gray);
        btborrar.setForeground(Color.WHITE);

        // Panel para los botones C y Ce
        JPanel bottomPanel = new JPanel(new GridLayout(1, 2,5,5));
        bottomPanel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        bottomPanel.setBackground(Color.DARK_GRAY);
        bottomPanel.add(btclear);
        bottomPanel.add(btborrar);

        // Agregar el panel al área de botones
        add(bottomPanel, BorderLayout.SOUTH);

        //panel de texto
        texto = new JPanel();
        texto.setLayout(new BorderLayout(5,5));
        muestra = new JTextField(34); 
        muestra.setHorizontalAlignment(SwingConstants.RIGHT);
        texto.add(muestra, BorderLayout.NORTH);
        muestra.setBorder(BorderFactory.createEmptyBorder(10,10,10,10));
        muestra.setFont(new Font("Arial", Font.PLAIN, 15));
        add(texto, BorderLayout.NORTH);
        texto.setBackground(Color.DARK_GRAY);

        //PARTE DE IRVING
        //texto de los botones
        String[] bt = {"9", "8","7", "/",
                       "6", "5", "4", "*",
                       "3", "2", "1", "-",
                       "0", ".", "=", "+"
        }; 
        actionE = new BackCalculadora(muestra);
        for(String botones : bt){
            JButton botonesPanel = new JButton(botones);
            botonesPanel.setBorderPainted(false);
            botonesPanel.setFont(new Font("Arial", Font.PLAIN, 15));
            Areabt.add(botonesPanel); 
            botonesPanel.setBackground(Color.gray);
            botonesPanel.setForeground(Color.WHITE);
            botonesPanel.addActionListener(actionE);

        }
        btclear.addActionListener(actionE);
        btborrar.addActionListener(actionE);
        
        //pack(); 
        setSize(300, 400);
        setResizable(false); 
    }
}