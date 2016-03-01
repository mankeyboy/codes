package pool;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JButton;

public class EventManager extends JFrame {

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					EventManager frame = new EventManager();
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
	public EventManager() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblEventManager = new JLabel("Event Manager");
		lblEventManager.setBounds(157, 12, 120, 15);
		contentPane.add(lblEventManager);
		
		JButton btnEventSlots = new JButton("Event Slots");
		btnEventSlots.setBounds(25, 52, 117, 25);
		contentPane.add(btnEventSlots);
		
		JButton btnEventFormat = new JButton("Event Format");
		btnEventFormat.setBounds(281, 52, 133, 25);
		contentPane.add(btnEventFormat);
		
		JButton btnSetFees = new JButton("Set Fees");
		btnSetFees.setBounds(25, 110, 117, 25);
		contentPane.add(btnSetFees);
		
		JButton btnFinalizeEvent = new JButton("Finalize Event");
		btnFinalizeEvent.setBounds(281, 110, 144, 25);
		contentPane.add(btnFinalizeEvent);
		
		JButton btnRespondToFeedback = new JButton("Respond to Feedback");
		btnRespondToFeedback.setBounds(124, 221, 187, 25);
		contentPane.add(btnRespondToFeedback);
		
		JButton btnPayFees = new JButton("Pay Fees");
		btnPayFees.setBounds(25, 157, 117, 25);
		contentPane.add(btnPayFees);
		
		JButton btnGiveFeedback = new JButton("Give Feedback");
		btnGiveFeedback.setBounds(281, 157, 144, 25);
		contentPane.add(btnGiveFeedback);
	}

}
