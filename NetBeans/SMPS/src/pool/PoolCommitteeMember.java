package pool;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JButton;

public class PoolCommitteeMember extends JFrame {

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					PoolCommitteeMember frame = new PoolCommitteeMember();
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
	public PoolCommitteeMember() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblPoolCommitteeMember = new JLabel("Pool Committee Member");
		lblPoolCommitteeMember.setBounds(132, 12, 184, 21);
		contentPane.add(lblPoolCommitteeMember);
		
		JButton btnModifySlot = new JButton("Modify Slot");
		btnModifySlot.setBounds(29, 66, 117, 25);
		contentPane.add(btnModifySlot);
		
		JButton btnStartCourses = new JButton("Start Courses");
		btnStartCourses.setBounds(275, 66, 141, 25);
		contentPane.add(btnStartCourses);
		
		JButton btnCompetitions = new JButton("Competitions");
		btnCompetitions.setBounds(29, 103, 141, 23);
		contentPane.add(btnCompetitions);
		
		JButton btnPayFees = new JButton("Pay Fees");
		btnPayFees.setBounds(285, 101, 117, 25);
		contentPane.add(btnPayFees);
		
		JButton btnStartEvent = new JButton("Start Event");
		btnStartEvent.setBounds(29, 138, 117, 25);
		contentPane.add(btnStartEvent);
		
		JButton btnBookPool = new JButton("Book Pool");
		btnBookPool.setBounds(285, 138, 117, 25);
		contentPane.add(btnBookPool);
		
		JButton btnCancelBooking = new JButton("Cancel Booking");
		btnCancelBooking.setBounds(29, 175, 152, 25);
		contentPane.add(btnCancelBooking);
		
		JButton btnRespondToFeedback = new JButton("Respond To Feedback");
		btnRespondToFeedback.setBounds(119, 212, 197, 30);
		contentPane.add(btnRespondToFeedback);
		
		JButton btnGiveFeedback = new JButton("Give Feedback");
		btnGiveFeedback.setBounds(275, 175, 141, 25);
		contentPane.add(btnGiveFeedback);
	}

}
