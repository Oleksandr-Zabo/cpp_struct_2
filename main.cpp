#include <iostream>
using namespace std;

enum UserAction
{
	exit_cycle = 0,
	setItem,
	viewAllItems,
	GiveAVoice
};

struct Animal {
	string name, class_animal, nickname;

	Animal() {
		name = "Dog";
		class_animal = "Canidae";
		nickname = "Jack";


	}
	Animal(string my_name, string my_class_animal, string my_nickname) : Animal() {
		name = my_name;
		nickname = my_nickname;

		// dog - Canidae, cat - Felidae, mouse - Muridae
		if (my_class_animal == "Canidae" || my_class_animal == "Felidae" || my_class_animal == "Fish" || my_class_animal == "Muridae") {
			class_animal = my_class_animal;
		}
		else {
			cout << "Incorrect class \nIt converts to Canidae (dogs)";
		}
	}
};

void all_get(Animal animal) {
	system("cls");
	cout << "Animal info: " << endl;
	cout << "Name: " << animal.name << endl;
	cout << "Class (dog - Canidae, cat - Felidae, mouse - Muridae) : " << animal.class_animal << endl;
	cout << "Nickname(how you say): " << animal.nickname << endl;
	system("pause");
	cout << endl << endl;
}

void set_value(Animal& animal) {
	cout << "Enter name: ";
	cin >> animal.name;

	cout << "Enter class (dog - Canidae, cat - Felidae, mouse - Muridae) : ";
	cin >> animal.class_animal;

	cout << "Enter nickname: ";
	cin >> animal.nickname;
	cout << endl << endl;

	system("cls");
	all_get(animal);

	system("pause");

}



void give_voice(Animal animal) {
	cout << "Animal voice: " << endl;

	if (animal.class_animal == "Canidae") {
		cout << "Woof";
	}

	else if(animal.class_animal == "Felidae") {
		cout << "Meow";
	}

	else if (animal.class_animal == "Fish") {
		cout << "...";
	}

	else if (animal.class_animal == "Muridae") {
		cout << "Pee-pee";
	}

	else {
		cout << "Incorrect or insufficient data";
	}
	cout << endl << endl;
	system("pause");
}


int main()
{
	Animal animal1("Cat", "Felidae", "Maks");
	all_get(animal1);

	bool cont = true;
	do//main cycle- to end
	{
		system("cls");
		int choice_mode;
		do//cycle to get mode
		{
			cout << "Choose option: "
				<< " \n0-exit_cycle \n1- set value "
				<<"\n2- see all"
				<< "\n3- Give a voice" 
				<< " \nWrite your choice: ";
			cin >> choice_mode;
			cin.ignore();
		} while (choice_mode < 0 || choice_mode > 3);
		system("cls");

		switch (choice_mode)
		{
			case UserAction::exit_cycle:
			{
				cont = false;
				system("cls");
			}break;

			case setItem:
			{
				set_value(animal1);

			}break;

			case viewAllItems:
			{
				all_get(animal1);

			}break;
			case GiveAVoice:
			{
				give_voice(animal1);

			}break;
		}

	}while (cont != false);


	system("pause");
	return 0;
}