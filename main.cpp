#include <iostream>
using namespace std;

enum UserAction
{
	exit_cycle = 0,
	setItem,
	getItem,
	findItem,
	viewAllItems,
};

struct Boiler {
	int power, heat_temp, volume;
	string company, color;

	Boiler() {
		company = "Samsung";
		color = "white";
		power = 50;
		volume = 50;
		heat_temp = 90;


	}
	Boiler(string company_set, string color_set, int power_set, int volume_set, int heat_temp_set) : Boiler() {
		company = company_set;
		color = color_set;
		if (power_set > 20) {
			power = power_set;
		}
		else {
			power = 50;
		}

		if (volume_set > 20) {
			volume = volume_set;
		}
		else {
			volume = 50;
		}

		if (heat_temp_set > 40) {
			heat_temp = heat_temp_set;
		}
		else {
			heat_temp = 80;
		}

		
	}
};

void set_value(Boiler& boiler) {
	int choice_set;
	do
	{

		cout << "Choose option "
			<< " \n1- set company"
			<< " \n2 - set color"
			<< " \n3- set  power"
			<< " \n4- set  volume (litrs)"
			<< " \n5 - set heating temperature(Degrees of Celsius)"
			<<"  \n6- exit to main menu"
			<< " \nWrite your choice: ";
		cin >> choice_set;

	} while (choice_set < 1 || choice_set > 6);
	cout << endl << "Enter value: ";
	switch (choice_set)
	{
	case 6: {
		system("cls");
		break;
	}break;


	case 1: {
		cin >> boiler.company;
	}break;
	case 2: {
		cin >> boiler.color;
	}break;

	case 3: {
		cin >> boiler.power;
	}break;

	case 4: {
		cin >> boiler.volume;
	}break;
	case 5: {
		cin >> boiler.heat_temp;
	}break;
	}
	cout << endl << endl;
	system("pause");

}


void get_value(Boiler boiler) {
	int choice_get;
	do
	{

		cout << "Choose option "
			<< " \n1- get company"
			<< " \n2- get color"
			<< " \n3- get  power"
			<< " \n4- get  volume (litrs)"
			<< " \n5- get heating temperature(Degrees of Celsius)"
			<< " \n6- exit to main menu"
			<< " \nWrite your choice: ";
		cin >> choice_get;

	} while (choice_get < 1 || choice_get>6);
	cout << "Your value: ";
	switch (choice_get)
	{
	case 6: {
		system("cls");
		break;
	}break;


	case 1: {
		cout << boiler.company;
	}break;
	case 2: {
		cout << boiler.color;
	}break;

	case 3: {
		cout << boiler.power;
	}break;

	case 4: {
		cout << boiler.volume;
	}break;
	case 5: {
		cout << boiler.heat_temp;
		}
	}
	cout << endl << endl;
	system("pause");

}

void all_get(Boiler boiler) {
	cout << "Boiler info: " << endl;
	cout << "Company: " << boiler.company << endl;
	cout << "Color: " << boiler.color << endl;
	cout << "Power: " << boiler.power << endl;
	cout << "Volume: " << boiler.volume << endl;
	cout << "Heating temperature (Degrees Celsius): " << boiler.heat_temp << endl;
	system("pause");
	cout << endl << endl;
}


void find_value(Boiler boiler) {
	int choice_find;
	bool is_found = true;
	do
	{

		cout << "Choose option "
			<< " \n1- find company"
			<< " \n2- find color"
			<< " \n3- find power"
			<< " \n4- find volume (litrs)"
			<< " \n5- find heating temperature(Degrees of Celsius)"
			<< " \n6- exit to main menu"
			<< " \nWrite your choice: ";
		cin >> choice_find;

	} while (choice_find < 1 || choice_find>6);

	cout << endl << "Your value: ";
	switch (choice_find)
	{
	case 6: {
		system("cls");
		break;
	}break;


	case 1: {
		string company;
		cin >> company;
		(company == boiler.company) ? is_found = true : is_found = false;

	}break;
	case 2: {
		string color;
		cin >> color;
		(color == boiler.color) ? is_found = true : is_found = false;
	}break;

	case 3: {
		int power;
		cin >> power;
		(power == boiler.power) ? is_found = true : is_found = false;

	}break;

	case 4: {
		int volume;
		cin >> volume;
		(volume == boiler.volume) ? is_found = true : is_found = false;

	}break;
	case 5: {
		int heat_temp;
		cin >> heat_temp;
		(heat_temp == boiler.heat_temp) ? is_found = true : is_found = false;

	}break;
	}
	if (is_found) {
		cout << "Your value is found" << endl;
		all_get(boiler);
	}
	else {
		cout << "Your value is not found" << endl;
		system("pause");
	}

}

int main()
{
	Boiler boiler1("Bosch", "Gray", 100, 90, 70);
	all_get(boiler1);

	bool cont = true;
	do//main cycle- to end
	{
		system("cls");
		int choice_mode;
		do//cycle to get mode
		{
			cout << "Choose option: "
				<< " \n0-exit_cycle \n1- set value \n2 - get value"
				<< " \n3- find value \n4- see all \nWrite your choice: ";
			cin >> choice_mode;
			cin.ignore();
		} while (choice_mode < 0 || choice_mode > 4);
		system("cls");

		switch (choice_mode)
		{
		case UserAction::exit_cycle:
		{
			cont = false;

		}break;

		case setItem:
		{
			set_value(boiler1);

		}break;

		case getItem:
		{
			get_value(boiler1);

		}break;

		case findItem:
		{
			find_value(boiler1);

		}break;

		case viewAllItems:
		{
			all_get(boiler1);

		}break;
		}

	} while (cont != false);


	system("pause");
	return 0;
}