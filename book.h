#include "lib.h"
struct Book {
private:

	string _title;
	string _author;
	string _publisher;
	string _ganre;

	static int _max_count;
public:
	Book();

	Book(string title, string author, string publisher, string ganre);

	~Book();


	void print_all();



	//geters
	string get_title();

	string get_author();

	string get_publisher();

	string get_ganre();


	static int get_max_count() {
		return _max_count;
	}


	//seters
	void set_title(string name);

	void set_author(string author);

	void set_publisher(string publisher);

	void set_ganre(string ganre);

};
