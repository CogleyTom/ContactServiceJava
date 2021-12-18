package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import contact.Contact;

class ContactTest {

	@Test
	void testContact() {
		Contact contact = new Contact("789987", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		assertTrue(contact.getFirstName().equals("Tom"));
		assertTrue(contact.getLastName().equals("Cogley"));
		assertTrue(contact.getPhone().equals("1234567891"));
		assertTrue(contact.getAddress().equals("82 Fake LN N, Tampa FL"));
		assertTrue(contact.getId().equals("789987"));
	}
	
	@Test
	void testContactFirstNameToLong() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "TomtheBestManAround", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactFirstNameNull() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", null, "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactLastNameToLong() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "Tom", "Cogleyisthistolong", "1234567891","82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactLastNameNull() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "Tom", null, "1234567891","82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactPhoneNotTen() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "Tom", "Cogley", "12345678917","82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactPhoneNull() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "Tom", "Cogley", null,"82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactAddressToLong() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL trying and test to"
					+ "see if this is to long to include in this program");
		}); 
	}
	
	@Test
	void testContactAddressNull() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987", "Tom", "Cogley", "1234567891",null);
		}); 
	}
	
	@Test
	void testContactIDToLong() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("789987654789456", "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		}); 
	}
	
	@Test
	void testContactIDNull() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact(null, "Tom", "Cogley", "1234567891","82 Fake LN N, Tampa FL");
		}); 
	}


}
