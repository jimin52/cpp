#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main( void ) {

	PhoneBook	phoneBook;

	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("abc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("aaa", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("bbb", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("ccc", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("ddd", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("eee", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("fff", "def", "ghi" ,"123"));
	phoneBook.AddContact( Contact("ggg", "def", "ghi" ,"123"));
	phoneBook.SearchContact();

	return 0;
}
