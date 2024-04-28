package prueba_final_06_11_2023.reproductor_de_musica;

import javax.sound.sampled.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;

class ReproductorDeSonido {
    private Clip clip;
    public JPanel panel;
    private String[] rutasMusicas = {
            "src/prueba_final_06_11_2023/Music/Clocks.wav",
            "src/prueba_final_06_11_2023/Music/Best_Interest.wav",
            "src/prueba_final_06_11_2023/Music/Tear_In_My_Heart.wav"
    };

    private String[] rutasImagenes = {

            "src/prueba_final_06_11_2023/Image/Clocks.jpeg",
            "src/prueba_final_06_11_2023/Image/Best_Interes.jpeg",
            "src/prueba_final_06_11_2023/Image/BlurryFace.jpg",
            "src/prueba_final_06_11_2023/Image/Welcome.jpg"
    };

    private int musicaActual = 3;

    public void cargarSonido(String ruta) {
        try {
            File archivoSonido = new File(ruta);
            AudioInputStream audioInputStream = AudioSystem.getAudioInputStream(archivoSonido);
            clip = AudioSystem.getClip();
            clip.open(audioInputStream);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void reproducir() {
        if (clip != null) {
            clip.setFramePosition(0);
            clip.start();
        }
    }

    public void detener() {
        if (clip != null && clip.isRunning()) {
            clip.stop();
        }
    }

    public void cambiarMusica(int indice) {
        detener();
        musicaActual = indice;
        cargarSonido(rutasMusicas[musicaActual]);
        reproducir();
    }

    public String obtenerRutaImagenActual() {
        return rutasImagenes[musicaActual];
    }
}


class Ventana extends JFrame {
    private ReproductorDeSonido reproductor;
    private JLabel imagenMusica;
    private JPanel panel;

    public Ventana() {
        setTitle("Reproductor de Música");
        setSize(1000, 1000);
        setLayout(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        reproductor = new ReproductorDeSonido();

        JButton botonMusica1 = new JButton("Música 1");
        botonMusica1.setBounds(30, 20, 150, 50);

        botonMusica1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                reproductor.cambiarMusica(0);
                mostrarImagenMusica();
                cambiarColorPanel(Color.RED); // Cambiar color a rojo al seleccionar música 1
            }
        });

        JButton botonMusica2 = new JButton("Música 2");
        botonMusica2.setBounds(30, 80, 150, 50);

        botonMusica2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                reproductor.cambiarMusica(1);
                mostrarImagenMusica();
                cambiarColorPanel(Color.GREEN); // Cambiar color a verde al seleccionar música 2
            }
        });

        JButton botonMusica3 = new JButton("Música 3");
        botonMusica3.setBounds(30, 140, 150, 50);

        botonMusica3.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                reproductor.cambiarMusica(2);
                mostrarImagenMusica();
                cambiarColorPanel(Color.BLUE); // Cambiar color a azul al seleccionar música 3

            }
        });

        JButton botonPausar = new JButton("Pausar");
        botonPausar.setBounds(30, 200, 150, 50);

        botonPausar.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                reproductor.detener();
            }
        });

        imagenMusica = new JLabel();
        imagenMusica.setBounds(200, 20, 150, 150);
        mostrarImagenMusica();

        add(botonMusica1);
        add(botonMusica2);
        add(botonMusica3);
        add(botonPausar);
        add(imagenMusica);
        setVisible(true);
        paneles();
    }

    private void mostrarImagenMusica() {
        String rutaImagen = reproductor.obtenerRutaImagenActual();
        ImageIcon icono = new ImageIcon(rutaImagen);
        Image imagenOriginal = icono.getImage();
        Image nuevaImagen = imagenOriginal.getScaledInstance(150, 150, Image.SCALE_SMOOTH);
        icono = new ImageIcon(nuevaImagen);
        imagenMusica.setIcon(icono);
    }

    private void paneles() {
        panel = new JPanel();
        panel.setBackground(Color.BLUE);
        panel.setLayout(null );
        panel.setSize(2000, 2000);
        getContentPane().add(panel);
    }

    // Método para cambiar el color del panel
    private void cambiarColorPanel(Color color) {
        panel.setBackground(color);
    }
}
