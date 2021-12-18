package contact;

import java.util.ArrayList;

public class ContactService {
	
	private ArrayList<Contact>contacts;
	
	public ContactService() {
		contacts = new ArrayList<>();
	}
	
	public boolean add(Contact contact) {
		boolean exists = false;
		for (Contact con: contacts) {
			if (con.equals(contact)) {
				exists = true;
			}
		}
		if (!exists) {
			contacts.add(contact);
			System.out.println("Contact Added to List");
			return true;
		}
		else {
			System.out.println("Contact already exists");
			return false;
		}
	}
	
	public boolean remove(String contactID) {
		for (Contact con : contacts) {
			if (con.getId().equals(contactID)) {
				contacts.remove(con);
				System.out.println("Contact removal successful");
				return true;
			}
		}
		System.out.println("Contact does not exist");
		return false;
	}
	
	public boolean update(String contactID, String firstName, String lastName,String phone, String address) {
		for (Contact con : contacts) {
			if (con.getId().equals(contactID)) {
				if (!(firstName.length() > 10) && (firstName != (""))) {
					con.setFirstName(firstName);
				}
				if (!(lastName.length() > 10) && (lastName != (""))) {
					con.setLastName(lastName);
				}
				if ((phone.length() == 10) && (phone != (""))) {
					con.setPhone(phone);
				}
				if (!(address.length() > 30) && (address != (""))) {
					con.setAddress(address);
				}
				System.out.println("Contact updated successfully");
				return true;
			}
		}
		System.out.println("Contact does not exist");
		return false;
	}

}
