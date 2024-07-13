#include "book.h"

Book::Book() {
	_title = "Abc";
	_author = "A.B.";
	_publisher = "Abab";
	_ganre = "comedy";
}

Book::~Book() {
}

Book::Book(string title, string author, string publisher, string ganre) : Book::Book() {
	set_title(title);
	set_author(author);
	set_publisher(publisher);
	set_ganre(ganre);
}

void Book::print_all() {
	cout << "Title: " << _title << endl;
	cout << "Author: " << _author << endl;
	cout << "Publisher: " << _publisher << endl;
	cout << "Ganre: " << _ganre << endl << endl;

}


//geters
string Book::get_title() {
	return _title;
}
string Book::get_author() {
	return _author;
}
string Book::get_publisher() {
	return _publisher;
}
string Book::get_ganre() {
	return _ganre;
}


//seters
void Book::set_title(string title) {
	_title = title;
}
void Book::set_author(string author) {
	_author = author;
}
void Book::set_publisher(string publisher) {
	_publisher = publisher;
}
void Book::set_ganre(string ganre) {
	_ganre = ganre;
}


int Book::_max_count = 10;