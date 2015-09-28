package pool;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;
import javax.swing.JLabel;
import javax.swing.LayoutStyle.ComponentPlacement;
import javax.swing.JComboBox;
import javax.swing.JTextField;
import javax.swing.JLayeredPane;

import java.awt.Font;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JInternalFrame;
import javax.swing.JSpinner;
import javax.swing.SpinnerNumberModel;
import java.awt.Window.Type;
import javax.swing.JPasswordField;
import javax.swing.border.EtchedBorder;
import java.awt.Color;
import javax.swing.JButton;
import javax.swing.border.SoftBevelBorder;
import javax.swing.border.BevelBorder;

public class Form extends JFrame {

	private JPanel contentPane;
	private JComboBox<String[]> cBox;
	private boolean sure = false;
	private JTextField txtEnterName;
	private JPasswordField passwordField;
	private JPasswordField passwordField_1;
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Form frame = new Form();
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
	public Form() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 798, 544);
		contentPane = new JPanel();
		contentPane.setBackground(new Color(65, 105, 225));
		contentPane.setBorder(new EtchedBorder(EtchedBorder.RAISED, null, null));
		setContentPane(contentPane);
		
		JPanel panel = new JPanel();
		panel.setBorder(new SoftBevelBorder(BevelBorder.LOWERED, null, null, null, null));
		panel.setBackground(new Color(204, 0, 153));
		
		JPanel panel_1 = new JPanel();
		panel_1.setBorder(new SoftBevelBorder(BevelBorder.RAISED, null, null, null, null));
		panel_1.setBackground(new Color(102, 51, 204));
		GroupLayout gl_contentPane = new GroupLayout(contentPane);
		gl_contentPane.setHorizontalGroup(
			gl_contentPane.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_contentPane.createSequentialGroup()
					.addComponent(panel_1, GroupLayout.PREFERRED_SIZE, 787, GroupLayout.PREFERRED_SIZE)
					.addContainerGap(GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
				.addGroup(Alignment.TRAILING, gl_contentPane.createSequentialGroup()
					.addContainerGap(136, Short.MAX_VALUE)
					.addComponent(panel, GroupLayout.PREFERRED_SIZE, 524, GroupLayout.PREFERRED_SIZE)
					.addGap(132))
		);
		gl_contentPane.setVerticalGroup(
			gl_contentPane.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_contentPane.createSequentialGroup()
					.addComponent(panel_1, GroupLayout.PREFERRED_SIZE, 143, GroupLayout.PREFERRED_SIZE)
					.addPreferredGap(ComponentPlacement.RELATED)
					.addComponent(panel, GroupLayout.PREFERRED_SIZE, 315, GroupLayout.PREFERRED_SIZE)
					.addContainerGap(50, Short.MAX_VALUE))
		);
		
		JLabel lblSwimmingPoolSign = new JLabel("Swimming Pool Sign Up");
		lblSwimmingPoolSign.setFont(new Font("Droid Sans", Font.BOLD | Font.ITALIC, 18));
		lblSwimmingPoolSign.setForeground(new Color(75, 0, 130));
		GroupLayout gl_panel_1 = new GroupLayout(panel_1);
		gl_panel_1.setHorizontalGroup(
			gl_panel_1.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_panel_1.createSequentialGroup()
					.addGap(311)
					.addComponent(lblSwimmingPoolSign)
					.addContainerGap(312, Short.MAX_VALUE))
		);
		gl_panel_1.setVerticalGroup(
			gl_panel_1.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_panel_1.createSequentialGroup()
					.addGap(47)
					.addComponent(lblSwimmingPoolSign)
					.addContainerGap(57, Short.MAX_VALUE))
		);
		panel_1.setLayout(gl_panel_1);
		
		JLabel lblApplyingFor = new JLabel("Applying For");
		lblApplyingFor.setFont(new Font("Droid Sans", Font.BOLD, 14));
		lblApplyingFor.setForeground(new Color(153, 204, 255));
		
		cBox = new JComboBox<String[]>();
		cBox.setModel(new DefaultComboBoxModel(new String[] {"Member", "Course"}));
		cBox.setEditable(false);
		String selected = (String)cBox.getSelectedItem();
		
		JLabel lblName = new JLabel("User Name");
		lblName.setFont(new Font("Droid Sans", Font.BOLD, 14));
		lblName.setForeground(new Color(153, 204, 255));
		
		txtEnterName = new JTextField();
		txtEnterName.setText("Enter User Name");
		txtEnterName.setColumns(10);
		
		JLabel lblAge = new JLabel("Age");
		lblAge.setFont(new Font("Droid Sans", Font.BOLD, 14));
		lblAge.setForeground(new Color(153, 204, 255));
		
		JSpinner Age_selector = new JSpinner();
		Age_selector.setModel(new SpinnerNumberModel(8, 8, 70, 1));
		
		JLabel lblGender = new JLabel("Gender");
		lblGender.setFont(new Font("Droid Sans", Font.BOLD, 14));
		lblGender.setForeground(new Color(153, 204, 255));
		
		JComboBox comboBox = new JComboBox();
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"Male", "Female", "Other (To be slotted with male)"}));
		
		JLabel lblPassword = new JLabel("Password");
		lblPassword.setFont(new Font("Droid Sans", Font.BOLD, 14));
		lblPassword.setForeground(new Color(153, 204, 255));
		
		passwordField = new JPasswordField();
		
		JLabel lblReenterPassword = new JLabel("Re-enter Password");
		lblReenterPassword.setFont(new Font("Droid Sans", Font.BOLD, 14));
		lblReenterPassword.setForeground(new Color(153, 204, 255));
		
		passwordField_1 = new JPasswordField();
		
		JButton btnNewButton = new JButton("Apply");
		btnNewButton.setFont(new Font("Droid Sans", Font.BOLD, 12));
		btnNewButton.setBackground(new Color(0, 153, 204));
		
		GroupLayout gl_panel = new GroupLayout(panel);
		gl_panel.setHorizontalGroup(
			gl_panel.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_panel.createSequentialGroup()
					.addGroup(gl_panel.createParallelGroup(Alignment.LEADING)
						.addGroup(gl_panel.createSequentialGroup()
							.addGap(90)
							.addGroup(gl_panel.createParallelGroup(Alignment.LEADING)
								.addComponent(lblApplyingFor)
								.addComponent(lblReenterPassword)
								.addComponent(lblPassword)
								.addComponent(lblGender)
								.addComponent(lblAge)
								.addComponent(lblName))
							.addGap(40)
							.addGroup(gl_panel.createParallelGroup(Alignment.LEADING)
								.addComponent(Age_selector, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE)
								.addComponent(comboBox, GroupLayout.PREFERRED_SIZE, 59, GroupLayout.PREFERRED_SIZE)
								.addComponent(passwordField, GroupLayout.PREFERRED_SIZE, 117, GroupLayout.PREFERRED_SIZE)
								.addComponent(passwordField_1, GroupLayout.PREFERRED_SIZE, 122, GroupLayout.PREFERRED_SIZE)
								.addComponent(cBox, GroupLayout.PREFERRED_SIZE, 100, GroupLayout.PREFERRED_SIZE)
								.addComponent(txtEnterName, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE)))
						.addGroup(gl_panel.createSequentialGroup()
							.addGap(226)
							.addComponent(btnNewButton)))
					.addContainerGap(136, Short.MAX_VALUE))
		);
		gl_panel.setVerticalGroup(
			gl_panel.createParallelGroup(Alignment.LEADING)
				.addGroup(gl_panel.createSequentialGroup()
					.addContainerGap()
					.addGroup(gl_panel.createParallelGroup(Alignment.TRAILING)
						.addComponent(lblApplyingFor)
						.addComponent(cBox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE))
					.addPreferredGap(ComponentPlacement.RELATED, 17, Short.MAX_VALUE)
					.addGroup(gl_panel.createParallelGroup(Alignment.TRAILING)
						.addComponent(lblName)
						.addComponent(txtEnterName, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE))
					.addGap(18)
					.addGroup(gl_panel.createParallelGroup(Alignment.TRAILING)
						.addComponent(lblAge)
						.addComponent(Age_selector, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE))
					.addGap(18)
					.addGroup(gl_panel.createParallelGroup(Alignment.TRAILING)
						.addComponent(lblGender)
						.addComponent(comboBox, GroupLayout.PREFERRED_SIZE, GroupLayout.DEFAULT_SIZE, GroupLayout.PREFERRED_SIZE))
					.addGap(18)
					.addGroup(gl_panel.createParallelGroup(Alignment.TRAILING)
						.addComponent(lblPassword)
						.addComponent(passwordField, GroupLayout.PREFERRED_SIZE, 22, GroupLayout.PREFERRED_SIZE))
					.addGap(18)
					.addGroup(gl_panel.createParallelGroup(Alignment.TRAILING)
						.addComponent(lblReenterPassword)
						.addComponent(passwordField_1, GroupLayout.PREFERRED_SIZE, 22, GroupLayout.PREFERRED_SIZE))
					.addGap(18)
					.addComponent(btnNewButton)
					.addGap(40))
		);
		panel.setLayout(gl_panel);
		contentPane.setLayout(gl_contentPane);
	}
}
