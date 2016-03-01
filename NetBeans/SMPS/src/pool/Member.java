package pool;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;
import javax.swing.JLabel;
import javax.swing.JButton;

public class Member extends JFrame {

	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Member frame = new Member();
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
	public Member() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblMemberPage = new JLabel("Member Page");
		lblMemberPage.setBounds(182, 5, 97, 15);
		contentPane.add(lblMemberPage);
		
		JButton btnApplyForCourse = new JButton("Apply For Course");
		btnApplyForCourse.setBounds(28, 50, 178, 25);
		contentPane.add(btnApplyForCourse);
		
		JButton btnCompetition = new JButton("Competition");
		btnCompetition.setBounds(279, 50, 145, 25);
		contentPane.add(btnCompetition);
		
		JButton btnApplyForSlot = new JButton("Apply For Slot");
		btnApplyForSlot.setBounds(28, 116, 178, 25);
		contentPane.add(btnApplyForSlot);
		
		JButton btnPayFees = new JButton("Pay Fees");
		btnPayFees.setBounds(279, 116, 145, 25);
		contentPane.add(btnPayFees);
		
		JButton btnCancelMembership = new JButton("Cancel Membership");
		btnCancelMembership.setBounds(246, 237, 178, 25);
		contentPane.add(btnCancelMembership);
		
		JButton btnBookPool = new JButton("Book Pool");
		btnBookPool.setBounds(28, 174, 178, 25);
		contentPane.add(btnBookPool);
		
		JButton btnCancelBooking = new JButton("Cancel Booking");
		btnCancelBooking.setBounds(279, 174, 145, 25);
		contentPane.add(btnCancelBooking);
		
		JButton btnGiveFeedback = new JButton("Give Feedback");
		btnGiveFeedback.setBounds(28, 237, 178, 25);
		contentPane.add(btnGiveFeedback);
	}

}
