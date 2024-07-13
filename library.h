#include "book.h"

struct Library
{
private:
	Book* books = nullptr;
	int allocated_memory = 10;
	int size;

	//logic
	void reallocate_memory(int new_size);
	bool is_max_books(int count);

	bool isEqual(Book book1, Book book2);
public:
	//Constructors and destructors
	Library();
	~Library();

	//push
	void push_back(Book book);
	void push_by_index(Book book, int index);

	//remove
	void remove_item(Book book);
	void remove_by_index(int index);
	void remove_all();

	//get
	Book get_item(int index);
	int get_size();

	//find
	void find_title(string name);
	void find_author(string director);

	//edit
	void edit_item(int index, Book book);

	//print
	void print_items();

	//sort
	void sort_by_title();
	void sort_by_author();
	void sort_by_publisher();

};

