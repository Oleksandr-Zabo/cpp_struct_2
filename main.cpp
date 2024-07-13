#include "library.h"

enum UserAction
{
	exit_main = 0,
	updateItem,
	viewAllItems,
	findAuthor,
	findTitle,
	sortTitle,
	sortAuthor,
	sortPublisher
};

//using getline(cin, str)- to get string with spaces
//using cin.ignore();- to clear bufer

int main()
{

	Library* library = new Library();

	//create start books
	Book book1("Tom Sawyer", "Mark Twain","bcd", "novel");
	Book book2("Ivan Pidkova", "Taras Shevchenko", "abc","poem");
	Book book3("Fata Morgana", "Kotsiubynskyi Mykhailo", "def", "novel");
	Book book4("The Little Prince", "Antoine de Saint-Exupery", "dcd", "novella");
	Book book5("Harry Potter", "Joanne Rowling", "ecd", "novel");
	Book book6("Valse melancolique", "Olga Kobylianska", "uwz", "novella");
	Book book7("Contra spem spero!", "Lesya Ukrainka", "gnj", "poem");
	Book book8("Martyn Borulia", "Ivan Karpenko-Kary", "gij", "play");
	Book book9("Zakhar Berkut", "Ivan Franko", "klm", "story");
	Book book10("The Alchemist", "Paulo Coelho", "opn", "novel");

	library->push_back(book1);
	library->push_back(book2);
	library->push_back(book3);
	library->push_back(book4);
	library->push_back(book5);
	library->push_back(book6);
	library->push_back(book7);
	library->push_back(book8);
	library->push_back(book9);
	library->push_back(book10);

	//show start user books
	cout << "Welcome to the online library!" << endl;
	cout << "Here are the books to choose from: \n" << endl;
	library->print_items();
	system("pause");

	bool main_bool = true;
	do
	{
		system("cls");

		int action;
		do
		{
			cout << "Main menu:" << endl;
			cout << "0 - Exit" << endl;
			cout << "1 - Edit a book" << endl;
			cout << "2 - Print all books" << endl;
			cout << "3 - Search for a book by author" << endl;
			cout << "4 - Search for a book by title" << endl;
			cout << "5 - Sort an array by book title" << endl;
			cout << "6 - Sorting an array by author" << endl;
			cout << "7 - Sorting an array by publisher" << endl << endl;

			cout << "Enter your value: ";
			cin >> action;

		} while (action < 0 || action > 7);

		system("cls");
		switch (action)
		{
		case exit_main:
		{
			system("cls");
			main_bool = false;
		}break;

		case updateItem:
		{
			int index;

			do
			{
				cout << "Enter index of book to edit (from 0): ";
				cin >> index;
			} while (index < 0 || index > library->get_size());
			library->remove_by_index(index);

			Book book;
			string title;
			cin.ignore();
			cout << "Enter book title: ";
			getline(cin, title);
			book.set_title(title);

			string author;
			cout << "Enter book author: ";
			getline(cin, author);
			book.set_author(author);

			string publisher;
			cout << "Enter book publisher: ";
			getline(cin, publisher);
			book.set_publisher(publisher);

			string ganre;
			cout << "Enter book ganre: ";
			getline(cin, ganre);
			book.set_ganre(ganre);

			library->push_by_index(book, index);

			system("pause");

			system("cls");
			library->print_items();
			system("pause");

			
		}break;

		case viewAllItems:
		{
			library->print_items();
			system("pause");
		}break;

		case findAuthor:
		{
			string author;
			cin.ignore();
			cout << "Enter author: ";
			getline(cin, author);
			library->find_author(author);
			system("pause");
		}break;

		case findTitle:
		{
			string title;
			cin.ignore();
			cout << "Enter title: ";
			getline(cin, title);
			library->find_title(title);
			system("pause");
		}break;

		case sortTitle:
		{
			library->sort_by_title();

			system("cls");
			library->print_items();
			system("pause");
		}break;

		case sortAuthor:
		{
			library->sort_by_author();
			system("cls");
			library->print_items();
			system("pause");
		}break;

		case sortPublisher:
		{
			library->sort_by_publisher();
			system("cls");
			library->print_items();
			system("pause");
		}break;

		}
		system("pause");
	} while (main_bool);

	return 0;
}