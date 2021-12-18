package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

import contact.Contact;
import contact.ContactService;

class ContactServiceTest {
	
	Contact contact = new Contact("789987", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");

	@Test
	void addContactPassTest() {
		ContactService con = new ContactService();
		Contact c = new Contact("789987", "Shirley", "Cogley", "9876543219","82 Fake LN N, Tampa FL");
		assertEquals(true, con.add(c));
	}
	
	@Test
	void addContactFailTest() {
		ContactService con = new ContactService();
		Contact c = new Contact("789987", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		assertEquals(true, con.add(c));
	}
	
	@Test
	void deleteContactPassTest() {
		ContactService con = new ContactService();
		Contact c = new Contact("789987", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		assertEquals(true, con.add(c));
		assertEquals(true, con.remove("789987"));
	}
	
	@Test
	void deleteContactFailTest() {
		ContactService con = new ContactService();
		Contact c = new Contact("789987", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		assertEquals(true, con.add(c));
		assertEquals(false, con.remove("987654"));
		assertEquals(true, con.remove("789987"));
	}
	
	@Test
	void updateContactTest() {
		ContactService con = new ContactService();
		Contact c = new Contact("001", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		Contact c1 = new Contact("002", "Shirley", "Cogley", "9876543219","8265 Fake LN N, Tampa FL");
		con.add(c);
		con.add(c1);
		assertEquals(true, con.update("001", "Ronin", "Thomas", "9239991234", ""));
		assertEquals(false, con.update("987654", "Logan", "Cogley", "9239991234", "This is the new address"));
	}
	
}
