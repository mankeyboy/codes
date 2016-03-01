package pool;

import java.awt.BorderLayout;
import java.awt.EventQueue;
import java.awt.Image;
import java.io.File;
import java.io.IOException;
import java.lang.Object;

import javax.swing.*;
import javax.imageio.ImageIO;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import net.miginfocom.swing.MigLayout;

import javax.swing.JButton;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;
import javax.swing.JLabel;
import javax.swing.LayoutStyle.ComponentPlacement;

import java.awt.Font;
import java.awt.Canvas;
import java.awt.image.BufferedImage;

import javax.swing.ImageIcon;

public class Manager extends JFrame {

	private JPanel contentPane;
	/**
	 * @wbp.nonvisual location=265,50
	 */
	
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Manager frame = new Manager();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Manager() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		
		JButton btnValidateMembership = new JButton("Validate Membership");
		btnValidateMembership.setFont(new Font("Droid Sans", Font.BOLD, 12));
		
		JButton btnStartFeeProcess = new JButton("Start Fee Process");
		btnStartFeeProcess.setFont(new Font("Droid Sans", Font.BOLD, 12));
		
		JButton btnAppointPoolCommittee = new JButton("Appoint Pool Committee");
		btnAppointPoolCommittee.setFont(new Font("Droid Sans", Font.BOLD, 12));
		
		JButton btnStartEvent = new JButton("Start Event");
		btnStartEvent.setFont(new Font("Droid Sans", Font.BOLD, 12));
		
		JButton btnNewButton = new JButton("Respond to Feedback");
		btnNewButton.setFont(new Font("Droid Sans", Font.BOLD, 12));
		
		JLabel lblManager = new JLabel("Manager");
		lblManager.setFont(new Font("Droid Sans", Font.BOLD, 12));
		
		JLabel lblIcon = new JLabel("Icon");
		lblIcon.setFont(new Font("Droid Sans", Font.BOLD, 12));
		BufferedImage img = null;
		try {
		    img = ImageIO.read(new File("strawberry.jpg"));
		} catch (IOException e) {
		    e.printStackTrace();
		}
		Image dimg = img.getScaledInstance(lblIcon.WIDTH, lblIcon.HEIGHT,
		        Image.SCALE_SMOOTH);
		ImageIcon imageIcon = new ImageIcon(dimg);
		GroupLayout gl_contentPane = new GroupLayout(contentPane);
		gl_contentPane.setHorizontalGroup(
			gl_contentPane.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_contentPane.createSequentialGroup()
					.addContainerGap()
					.addGroup(gl_contentPane.createParallelGroup(Alignment.TRAILING)
						.addGroup(gl_contentPane.createSequentialGroup()
							.addComponent(btnValidateMembership)
							.addPreferredGap(ComponentPlacement.RELATED, 91, Short.MAX_VALUE)
							.addComponent(btnStartEvent, GroupLayout.PREFERRED_SIZE, 156, GroupLayout.PREFERRED_SIZE))
						.addGroup(gl_contentPane.createSequentialGroup()
							.addComponent(btnStartFeeProcess, GroupLayout.DEFAULT_SIZE, GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
							.addGap(95)
							.addComponent(btnAppointPoolCommittee))
						.addGroup(gl_contentPane.createSequentialGroup()
							.addComponent(lblManager)
							.addGap(199)
							.addComponent(lblIcon)
							.addGap(79)))
					.addGap(31))
				.addGroup(gl_contentPane.createSequentialGroup()
					.addGap(119)
					.addComponent(btnNewButton)
					.addContainerGap(326, Short.MAX_VALUE))
		);
		gl_contentPane.setVerticalGroup(
			gl_contentPane.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_contentPane.createSequentialGroup()
					.addContainerGap()
					.addGroup(gl_contentPane.createParallelGroup(Alignment.BASELINE)
						.addComponent(lblManager)
						.addComponent(lblIcon))
					.addGap(52)
					.addGroup(gl_contentPane.createParallelGroup(Alignment.BASELINE)
						.addComponent(btnValidateMembership)
						.addComponent(btnStartEvent, GroupLayout.DEFAULT_SIZE, GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
					.addGap(47)
					.addComponent(btnNewButton)
					.addGap(51)
					.addGroup(gl_contentPane.createParallelGroup(Alignment.BASELINE)
						.addComponent(btnAppointPoolCommittee)
						.addComponent(btnStartFeeProcess))
					.addContainerGap())
		);
		contentPane.setLayout(gl_contentPane);
	}
}
