import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.Observable;
import java.util.Observer;
import org.jfree.*;
import org.jfree.chart.ChartPanel;
import org.jfree.ui.ApplicationFrame;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class Vue implements Observer,ActionListener  {
	private static JLabel label;
	Font font = new Font("Italic", Font.PLAIN, 20);
	LineChart ex = new LineChart("oui", "non");
	JFrame fenetre = new JFrame();
	JPanel panel = new JPanel();
	JPanel panel2 = new JPanel();
	JPanel panel3 = new JPanel();
	private LineChart chart;

	Model model = new Model();

		
	public Vue() throws IOException {
		// *******************Partie graphique.exe issou :
		

		fenetre.setLayout(new BorderLayout());
		fenetre.setVisible(true);
		fenetre.setSize(600, 600);
		fenetre.setLocationRelativeTo(null);
		fenetre.setVisible(true);
		panel.setBackground(Color.DARK_GRAY);
		panel2.setBackground(Color.GRAY);
		panel3.setBackground(Color.DARK_GRAY);
		model.getTemp();
		label = new JLabel("Température : " + model.getTemp() + "°C");
		label.setFont(font);
		label.setForeground(Color.CYAN);
		label.setVisible(true);
		panel2.add(label);
		fenetre.add(panel2, BorderLayout.SOUTH);
		fenetre.add(panel3, BorderLayout.EAST);
		panel.setPreferredSize(new Dimension(400, 400));
		panel2.setPreferredSize(new Dimension(50, 100));
		panel3.setPreferredSize(new Dimension(200, 900));
		
		BufferedImage img = ImageIO.read(new File("C:\\Users\\Samy.DESKTOP-TJESP50\\Downloads\\frigo.jpg"));
		ImageIcon icon = new ImageIcon(img);
		
		JLabel label = new JLabel(icon);
		JLabel label2 = new JLabel(icon);
		JLabel label3 = new JLabel(icon);
		
		label.setIcon(new ImageIcon(new ImageIcon("C:\\Users\\Samy.DESKTOP-TJESP50\\Downloads\\frigo.jpg").getImage().getScaledInstance(200, 400, Image.SCALE_DEFAULT)));
		panel3.add(label);
		JPanel panel4 = new JPanel();
		
		JButton bouton1 = new JButton("+");
		JButton bouton2 = new JButton("-");
		
		bouton1.setSize(400,200);
		bouton2.setSize(400,200);
		bouton1.setBackground(Color.WHITE);
		bouton2.setBackground(Color.BLACK);
		bouton2.setForeground(Color.white);
		
		panel3.add(bouton1);
		panel3.add(bouton2);
		
		bouton1.addActionListener(this);
		
		chart = new LineChart("Courbe des temperatures", "Temperature exterieure et interieure");
		ChartPanel chartObject = new ChartPanel(chart.getJChart());
		
		fenetre.add(chartObject);
		fenetre.pack();
		fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		model.notifyObservers(this);
		
		
}


	@Override
	public void update(Observable o, Object arg) {
		// TODO Auto-generated method stub
		
	}
	


	@Override
	public void actionPerformed(ActionEvent e) {
		Controller ctrl = new Controller();
		ctrl.augmenteDegres(model.getTemp());
		label.repaint();
		panel2.repaint();
		System.out.print("ouaisss");
	}
}