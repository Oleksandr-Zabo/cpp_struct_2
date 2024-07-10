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

struct Iron {
	int power, max_temp, min_temp;
	string brand, color, model, steam_supply;

	Iron() {
		brand = "Samsung";
		model = "Kj2045";
		color = "white";
		min_temp = 50;
		max_temp = 90;
		steam_supply = "yes";
		power = 100;
		

	}
	Iron(string brand_set, string model_set, string color_set, int min_temp_set, int max_temp_set, string steam_supply_set,  int power_set ) : Iron() {
		brand = brand_set;
		model_set = model;
		color = color_set;
		if (min_temp_set > 20 && min_temp_set < max_temp_set) {
			min_temp = min_temp_set;
		}
		else {
			min_temp = 50;
		}

		if (max_temp_set > 40 && min_temp_set < max_temp_set) {
			max_temp = max_temp_set;
		}
		else {
			max_temp = 80;
		}

		if (steam_supply_set == "yes" || steam_supply_set == "no") {
			steam_supply = steam_supply_set;
		}
		else {
			steam_supply = "yes";
		}

		if (power_set > 80) {
			power = power_set;
		}
		else {
			power = 100;
		}
	}
};

void set_value(Iron& iron) {
	int choice_set;
	do
	{

		cout << "Choose option \n1- set brand \n2 - set model"
			<< " \n3 - set color"
			<< " \n4- set  minimum temperature"
			<< " \n5- set  maximum temperature"
			<< " \n6 - set steam supply (yes / no)"
			<< " \n7 - set power  \n8- exit to main menu"
			<< " \nWrite your choice: ";
		cin >> choice_set;

	} while (choice_set < 1 || choice_set>8);
	cout << endl << "Enter value: ";
	switch (choice_set)
	{
	case 8: {
		break;
	}break;


	case 1: {
		cin >> iron.brand;
	}break;
	case 2: {
		cin >> iron.model;
	}break;

	case 3: {
		cin >> iron.color;
	}break;

	case 4: {
		cin >> iron.min_temp;
	}break;
	case 5: {
		cin >> iron.max_temp;
	}break;

	case 6: {
		cin >> iron.steam_supply;
	}break;

	case 7: {
		cin >> iron.power;
	}break;
	}
	cout << endl << endl;
	system("pause");

}


void get_value(Iron iron) {
	int choice_get;
	do
	{

		cout << "Choose option \n1- get brand \n2 - get model"
			<< " \n3 - get color"
			<< " \n4- get  minimum temperature"
			<< " \n5- get  maximum temperature"
			<< " \n6 - get steam supply (true/false)"
			<< " \n7 - get power  \n8- exit to main manu"
			<< " \nWrite your choice: ";
		cin >> choice_get;

	} while (choice_get < 1 || choice_get>8);
	cout << "Your value: ";
	switch (choice_get)
	{
	case 10: {
		break;
	}break;


	case 1: {
		cout << iron.brand;
	}break;
	case 2: {
		cout << iron.model;
	}break;

	case 3: {
		cout << iron.color;
	}break;

	case 4: {
		cout << iron.min_temp;
	}break;
	case 5: {
		cout << iron.max_temp;
	}break;

	case 6: {
		cout << iron.steam_supply;
	}break;

	case 7: {
		cout << iron.power;
	}break;
	}
	cout << endl << endl;
	system("pause");

}

void all_get(Iron iron) {
	cout << "Iron info: " << endl;
	cout << "Brand: " << iron.brand << endl;
	cout << "Model: " << iron.model << endl;
	cout << "Color: " << iron.color << endl;
	cout << "Minimum temperature (Degrees Celsius): " << iron.min_temp << endl;
	cout << "Maxium temperature (Degrees Celsius): " << iron.max_temp << endl;
	cout << "Steam supply: " << iron.steam_supply << endl;
	cout << "Power: " << iron.power << endl;
	system("pause");
	cout << endl << endl;
}


void find_value(Iron iron) {
	int choice_find;
	bool is_found = true;
	do
	{

		cout << "Choose option \n1- find brand \n2 - find model"
			<< " \n3 - find color"
			<< " \n4- find minimum temperature"
			<< " \n5- find maximum temperature"
			<< " \n6 - find steam supply (true/false)"
			<< " \n7 - find power  \n8- exit to main manu"
			<< " \nWrite your choice: ";
		cin >> choice_find;

	} while (choice_find < 1 || choice_find>8);

	cout << endl << "Your value: ";
	switch (choice_find)
	{
	case 8: {
		break;
	}break;


	case 1: {
		string brand;
		cin >> brand;
		(brand == iron.brand) ? is_found = true : is_found = false;

	}break;
	case 2: {
		string model;
		cin >> model;
		(model == iron.model) ? is_found = true : is_found = false;
	}break;

	case 3: {
		string color;
		cin >> color;
		(color == iron.color) ? is_found = true : is_found = false;

	}break;

	case 4: {
		int min_temp;
		cin >> min_temp;
		(min_temp == iron.min_temp) ? is_found = true : is_found = false;

	}break;
	case 5: {
		int max_temp;
		cin >> max_temp;
		(max_temp == iron.max_temp) ? is_found = true : is_found = false;

	}break;

	case 6: {
		string steam_supply;
		cin >> steam_supply;
		(steam_supply == iron.steam_supply) ? is_found = true : is_found = false;

	}break;

	case 7: {
		int power;
		cin >> power;
		(power == iron.power) ? is_found = true : is_found = false;

	}break;
	}
	if (is_found) {
		cout << "Your value is found" << endl;
		all_get(iron);
	}
	else {
		cout << "Your value is not found" << endl;
		system("pause");
	}
	
}

int main()
{
	Iron iron1("Bosch", "Mb105", "Gray", 40, 90, "no", 200);
	all_get(iron1);

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
			set_value(iron1);

		}break;

		case getItem:
		{
			get_value(iron1);

		}break;

		case findItem:
		{
			find_value(iron1);

		}break;

		case viewAllItems:
		{
			all_get(iron1);

		}break;
		}

	} while (cont != false);


	system("pause");
	return 0;
}