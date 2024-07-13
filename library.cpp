#include "library.h"

Library::Library()
{
	books = new Book[allocated_memory];
	size = 0;
}

Library::~Library()
{
	delete[] books;
	allocated_memory = 10;
	size = 0;
}


bool Library::isEqual(Book book1, Book book2)
{
	return book1.get_title() == book2.get_title()
		&& book1.get_author() == book2.get_author()
		&& book1.get_ganre() == book2.get_ganre()
		&& book1.get_publisher() == book2.get_publisher();
}

bool Library::is_max_books(int count) {
	int max_count = Book::get_max_count();
	if (max_count == count) {
		cout << "The disc list is completely filled in. \nDelete some disks to add new" << endl;
		return true;
	}
	else {
		return false;
	}

}

void Library::reallocate_memory(int new_size)
{
	Book* new_books = new Book[new_size];
	for (int i = 0; i < size; i++)
	{
		new_books[i] = books[i];
	}
	delete[] books;
	books = new_books;
	allocated_memory = new_size;
}




void Library::push_back(Book book)
{
	if (!is_max_books(size)) {
		if (size == allocated_memory)
		{
			reallocate_memory(allocated_memory + 10);
		}
		books[size] = book;
		size++;
	}
}

void Library::push_by_index(Book book, int index) {

	if (!is_max_books(size)) {
		if (size == allocated_memory)
		{
			reallocate_memory(allocated_memory + 10);
		}
		for (int i = size; i > index; i--)
		{
			books[i] = books[i - 1];
		}

		books[index] = book;
		size++;
	}
}


void Library::remove_item(Book book)
{
	for (int i = 0; i < size; i++)
	{
		if (isEqual(books[i], book))
		{
			remove_by_index(i);
			break;
		}
	}
}

void Library::remove_by_index(int index)
{
	for (int i = index; i < size - 1; i++)
	{
		books[i] = books[i + 1];
	}
	size--;
}

void Library::remove_all()
{
	delete[] books;
	books = new Book[allocated_memory];
	size = 0;
}

Book Library::get_item(int index)
{
	return books[index];
}

int Library::get_size()
{
	return size;
}


void Library::find_title(string title) {
	bool is_found = false;
	for (int i = 0; i < size; i++)
	{
		if (books[i].get_title() == title) {
			cout << "Book " << i + 1 << endl;
			books[i].print_all();
			is_found = true;
			cout << endl;
		}
	}

	if (!is_found) {
		cout << "Films/disks with your input title is not found" << endl;
	}
}

void Library::find_author(string author) {
	bool is_found = false;
	for (int i = 0; i < size; i++)
	{
		if (books[i].get_author() == author) {
			cout << "Book " << i + 1 << endl;
			books[i].print_all();
			is_found = true;
			cout << endl;
		}
	}

	if (!is_found) {
		cout << "Films/disks with your input director is not found" << endl;
	}
}


void Library::edit_item(int index, Book book)
{
	books[index] = book;
}

void Library::print_items()
{
	for (int i = 0; i < size; i++)
	{
		cout << "Book " << i + 1 << endl;
		books[i].print_all();
	}
}


void Library::sort_by_title() {
	for (int i = 0; i < size - 1; ++i) {
		int minIndex = i;
		for (int j = i + 1; j < size; ++j) {
			// Compare book titles
			if (books[j].get_title() < books[minIndex].get_title()) {
				minIndex = j;
			}
		}
		// swap elems
		if (minIndex != i) {
			swap(books[i], books[minIndex]);
		}
	}
}


void Library::sort_by_author() {
	for (int i = 0; i < size - 1; ++i) {
		int minIndex = i;
		for (int j = i + 1; j < size; ++j) {
			// Compare book author
			if (books[j].get_author() < books[minIndex].get_author()) {
				minIndex = j;
			}
		}
		// swap elems
		if (minIndex != i) {
			swap(books[i], books[minIndex]);
		}
	}

}

void Library::sort_by_publisher() {
	for (int i = 0; i < size - 1; ++i) {
		int minIndex = i;
		for (int j = i + 1; j < size; ++j) {
			// Compare book publishers
			if (books[j].get_publisher() < books[minIndex].get_publisher()) {
				minIndex = j;
			}
		}
		// swap elems
		if (minIndex != i) {
			swap(books[i], books[minIndex]);
		}
	}

}
