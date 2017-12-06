#include <stdio.h>
#include <stdint.h>
#include <io.h>
#include <iostream>
#include <fstream>
#include <string>
#include <fcntl.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/text_format.h>

#include "protocol.pb.h"
#include "address.pb.h"
using namespace std;

using google::protobuf::io::FileInputStream;
using google::protobuf::io::FileOutputStream;
//using google::protobuf::io::ZeroCopyInputStream;
//using google::protobuf::io::CodedInputStream;
//using google::protobuf::io::ZeroCopyOutputStream;
//using google::protobuf::io::CodedOutputStream;
//using google::protobuf::Message;

// This function fills in a Person message based on user input.
void PromptForAddress(tutorial::Person* person) 
{
	cout << "Enter person ID number: ";
	int id;
	cin >> id;
	person->set_id(id);
	cin.ignore(256, '\n');

	cout << "Enter name: ";
	getline(cin, *person->mutable_name());

	cout << "Enter email address (blank for none): ";
	string email;
	getline(cin, email);
	if (!email.empty()) {
		person->set_email(email);
	}

	while (true) {
		cout << "Enter a phone number (or leave blank to finish): ";
		string number;
		getline(cin, number);
		if (number.empty()) {
			break;
		}

		tutorial::Person::PhoneNumber* phone_number = person->add_phone();
		phone_number->set_number(number);

		cout << "Is this a mobile, home, or work phone? ";
		string type;
		getline(cin, type);
		if (type == "mobile") {
			phone_number->set_type(tutorial::Person::MOBILE);
		}
		else if (type == "home") {
			phone_number->set_type(tutorial::Person::HOME);
		}
		else if (type == "work") {
			phone_number->set_type(tutorial::Person::WORK);
		}
		else {
			cout << "Unknown phone type.  Using default." << endl;
		}
	}
}

// Main function:  Reads the entire address book from a file,
//   adds one person based on user input, then writes it back out to the same
//   file.
void  writedata(int argc, char* argv[]) 
{
	// Verify that the version of the library that we linked against is
	// compatible with the version of the headers we compiled against.
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	//if (argc != 2) {
	//	cerr << "Usage:  " << argv[0] << " ADDRESS_BOOK_FILE" << endl;
	//	return -1;
	//}

	tutorial::AddressBook *address_book = new tutorial::AddressBook;

	{
		// Read the existing address book.
		// fstream input(argv[1], ios::in | ios::binary);
		//   if (!input) {
		//    cout << argv[1] << ": File not found.  Creating a new file." << endl;
		//   } else if (!address_book.ParseFromIstream(&input)) {
		//     cerr << "Failed to parse address book." << endl;
		//     return -1;
		//  }
	}

	// Add an address.
	PromptForAddress(address_book->add_person());
	const char *filename = "addressbook";
	{
		// Write the new address book back to disk.
		const tutorial::AddressBook& proto = *address_book;
		int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
		FileOutputStream* output = new FileOutputStream(fd);
		if (!google::protobuf::TextFormat::Print(proto, output)) {
			cerr << "Failed to write address book." << endl;
			return;
		}
		delete output;
		close(fd);
		//fstream output(argv[1], ios::out | ios::trunc | ios::binary);
		//if (!address_book.SerializeToOstream(&output)) {
		//   cerr << "Failed to write address book." << endl;
		//    return -1;
		//  }
	}

	// Optional:  Delete all global objects allocated by libprotobuf.
	google::protobuf::ShutdownProtobufLibrary();

	return;
}


// Iterates though all people in the AddressBook and prints info about them.
void ListPeople(const tutorial::AddressBook* address_book) {
	for (int i = 0; i < address_book->person_size(); i++) {
		const tutorial::Person& person = address_book->person(i);

		cout << "Person ID: " << person.id() << endl;
		cout << "  Name: " << person.name() << endl;
		if (person.has_email()) {
			cout << "  E-mail address: " << person.email() << endl;
		}

		for (int j = 0; j < person.phone_size(); j++) {
			const tutorial::Person::PhoneNumber& phone_number = person.phone(j);

			switch (phone_number.type()) {
			case tutorial::Person::MOBILE:
				cout << "  Mobile phone #: ";
				break;
			case tutorial::Person::HOME:
				cout << "  Home phone #: ";
				break;
			case tutorial::Person::WORK:
				cout << "  Work phone #: ";
				break;
			}
			cout << phone_number.number() << endl;
		}
	}
}

// Main function:  Reads the entire address book from a file and prints all
//   the information inside.
void readdata(int argc, char* argv[])
{
	// Verify that the version of the library that we linked against is
	// compatible with the version of the headers we compiled against.
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	//if (argc != 2) {
	//	cerr << "Usage:  " << argv[0] << " ADDRESS_BOOK_FILE" << endl;
	//	return;
	//}

	tutorial::AddressBook* address_book = new tutorial::AddressBook;

	bool retValue = false;

	const char *filename = "addressbook";
	int fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		std::cerr << " Error opening the file " << std::endl;
		return;
	}

	FileInputStream *fileInput = new FileInputStream(fd);

	if (!google::protobuf::TextFormat::Parse(fileInput, address_book))
	{
		cerr << std::endl << "Failed to parse file!" << endl;
		return;
	}
	else
	{
		retValue = true;
		cerr << "Read Input File - " << argv[1] << endl;
	}

	//{
	// Read the existing address book.
	// fstream input(argv[1], ios::in | ios::binary);
	//   if (!address_book.ParseFromIstream(&input)) {
	//     cerr << "Failed to parse address book." << endl;
	//     return -1;
	//   }
	// }

	ListPeople(address_book);

	// Optional:  Delete all global objects allocated by libprotobuf.
	google::protobuf::ShutdownProtobufLibrary();

	return;
}


void prototest()
{
	Student *student1 = new Student();
	student1->set_age(1);
	student1->set_name("tom");
	student1->set_score(98.5);
	for (uint32_t i = 0; i < 5; ++i)
	{
		char name[32] = { 0 };
		sprintf_s(name, 32, "book_%d", i);
		Book *pBook = student1->add_arrbook();
		pBook->set_name(name);
		pBook->set_price(1.2f * (i + 1));
		pBook->set_pages((i + 1) * 15);
	}
	printf("%s\n", student1->DebugString().c_str());
	char buf[1024] = { 0 };
	int32_t len = student1->ByteSize();
	student1->SerializeToArray(buf, len);
	printf("btye size = %d\n", len);

	Student student2;
	student2.ParseFromArray(buf, len);
	printf("%s\n", student2.DebugString().c_str());
	getchar();
	return;
}

int32_t main_2(int argc, char* argv[])
{
	//prototest();
	//writedata(argc, argv);
	readdata(argc, argv);

	return 0;
}