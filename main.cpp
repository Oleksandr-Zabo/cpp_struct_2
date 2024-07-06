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

struct Wash_machine {
private:
	double _width, _length, _height;
	int _power, _speed, _heat_temp;
	string _firm, _color;

public:
	Wash_machine() {
		_firm = "Samsung";
		_color = "white";
		_width = 1.2;
		_length = 1;
		_height = 1.3;
		_power = 100;
		_speed = 1000;
		_heat_temp = 50;

	}
	Wash_machine(string firm, string color, double width, double length, double height, int power, int speed, int heat_temp) : Wash_machine() {
		setFirm(firm);
		setColor(color);
		setWidth(width);
		setLength(length);
		setHeight(height);
		setPower(power);
		setSpeed(speed);
		setHeatTemp(heat_temp);
	}
	//Getters
	double getLength() { return _length; }
	double getWidth() { return _width; }
	double getHeight() { return _height; }
	int getPower() { return _power; }
	int getSpeed() { return _speed; }
	int getHeatTemp() { return _heat_temp; }
	string getFirm() { return _firm; }
	string getColor() { return _color; }

	//Setters
	void setLength(double length) {
		if (length > 0 && length < 2.5) {
			_length = length;
		}
		else {
			_length = 1;
		}
	}

	void setWidth(double width) {
		if (width > 0 && width < 2.5) {
			_width = width;
		}
		else {
			_width = 1;
		}
	}

	void setHeight(double height) {
		if (height > 0 && height < 2.5) {
			_height = height;
		}
		else {
			_height = 1;
		}
	}
	
	void setPower(int power) {
		if (power > 50) {
			_power = power;
		}
		else {
			_power = 50;
		}
	}

	void setSpeed(int speed) {
		if (speed > 500 && speed < 2000) {
			_speed = speed;
		}
		else {
			_speed = 500;
		}
	}

	void setHeatTemp(int h_temp) {
		if (h_temp > 20 && h_temp < 100) {
			_heat_temp = h_temp;
		}
		else {
			_heat_temp = 50;
		}
	}

	void setFirm(string firm) {
		_firm = firm;
	}

	void setColor(string color) {
		_color = color;
	}
};

void set_value(Wash_machine& car) {
	int choice_set;
	do
	{
		
		cout << "Choose option \n1- set firm \n2 - set color"
			<< " \n3 - set width \n4- set lenth"
			<< " \n5 - set height \n6- power"
			<< " \n7 - set speed \n8- get heat_temperature \n9- exit_cycle"
			<< " \nWrite your choice: ";
		cin >> choice_set;

	} while (choice_set < 1 || choice_set>9);
	cout << "Enter value: ";
	switch (choice_set)
	{
	case 10: {
		break;
	}break;


	case 1: {
		string firm;

		cin >> firm;
		car.setFirm(firm);
	}break;
	case 2: {
		string colour;
		cin >> colour;
		car.setColor(colour);
	}break;

	case 3: {
		double width;
		cin >> width;
		car.setWidth(width);
	}break;

	case 4: {
		double length;
		cin >> length;
		car.setLength(length);
	}break;
	case 5: {
		double height;
		cin >> height;
		car.setHeight(height);
	}break;

	case 6: {
		int power;
		cin >> power;
		car.setPower(power);
	}break;

	case 7: {
		int speed;
		cin >> speed;
		car.setSpeed(speed);
	}break;
	case 8: {
		int h_temp;
		cin >> h_temp;
		car.setHeatTemp(h_temp);
	}break;


	}
	cout << endl << endl;
	system("pause");
	
}


void get_value(Wash_machine car) {
	int choice_get;
	do
	{

		cout << "Choose option \n1- get firm \n2 - get color"
			<< " \n3 - get width \n4- get lenth"
			<< " \n5 - get height \n6- get power"
			<< " \n7 - get speed \n8- get heat_temperature \n9- exit_cycle"
			<< " \nWrite your choice: ";
		cin >> choice_get;

	} while (choice_get < 1 || choice_get>9);
	cout << "Your value: ";
	switch (choice_get)
	{
	case 10: {
		break;
	}break;

		   
	case 1: {
		cout << car.getFirm();
	}break;
	case 2: {
		cout << car.getColor();
	}break;

	case 3: {
		cout << car.getWidth();
	}break;

	case 4: {
		cout << car.getLength();
	}break;
	case 5: {
		cout << car.getHeight();
	}break;

	case 6: {
		cout << car.getPower();
	}break;

	case 7: {
		cout << car.getSpeed();
	}break;
	case 8: {
		cout << car.getHeatTemp();
	}break;

	}
	cout << endl << endl;
	system("pause");

}

void all_get(Wash_machine car) {
	cout << "Wash_machine structure: " << endl;
	cout << "Firm: " << car.getFirm() << endl;
	cout << "Colour: " << car.getColor() << endl;
	cout << "Width(m): " << car.getWidth() << endl;
	cout << "Length(m): " << car.getLength() << endl;
	cout << "Height(m): " << car.getHeight() << endl;
	cout << "Power: " << car.getPower() << endl;
	cout << "Speed(rpm): " << car.getSpeed() << endl;
	cout << "Heating temperature (degrees Celsius): " << car.getHeatTemp() << endl;
	system("pause");
	cout << endl << endl;
}


void find_value(Wash_machine car) {
	int choice_find;
	bool is_found = true;
	do
	{

		cout << "Choose option \n1- find firm \n2 - find color"
			<< " \n3 - find width \n4- find lenth"
			<< " \n5 - find height \n6- find power"
			<< " \n7 - find speed \n8- find heat_temperature \n9- exit_cycle"
			<< " \nWrite your choice: ";
		cin >> choice_find;

	} while (choice_find < 1 || choice_find>9);
	cout << "Your value: ";
	switch (choice_find)
	{
	case 9: {
		break;
	}break;

	
	case 1: {
		string firm;
		cin >> firm;
		(firm == car.getFirm()) ? is_found = true : is_found = false;
		
	}break;
	case 2: {
		string color;
		cin >> color;
		(color == car.getColor()) ? is_found = true : is_found = false;
	}break;

	case 3: {
		double width;
		cin >> width;
		(width == car.getWidth()) ? is_found = true : is_found = false;
		
	}break;

	case 4: {
		double length;
		cin >> length;
		(length == car.getLength()) ? is_found = true : is_found = false;
		
	}break;
	case 5: {
		double height;
		cin >> height;
		(height == car.getHeight()) ? is_found = true : is_found = false;
		
	}break;

	case 6: {
		int power;
		cin >> power;
		(power == car.getPower()) ? is_found = true : is_found = false;
		
	}break;

	case 7: {
		int speed;
		cin >> speed;
		(speed == car.getSpeed()) ? is_found = true : is_found = false;
		
	}break;
	case 8: {
		int h_temp;
		cin >> h_temp;
		(h_temp == car.getHeatTemp()) ? is_found = true : is_found = false;
		
	}break;

	}
	
	(is_found) ? cout << "Your value is found" : cout << "Your value is not found";
	cout << endl << endl;
	system("pause");
}

int main()
{
	Wash_machine wash_mashine1("Bosch", "Gray", 1.5, 1, 0.9, 800, 1000, 70);
	all_get(wash_mashine1);

	bool cont = true;
	do//main cycle- to end
	{
		system("cls");
		int choice_mode;
		do//cycle to get mode
		{
			cout << "Choose option: "
				<<" \n0-exit_cycle \n1- set value \n2 - get value"
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
			set_value(wash_mashine1);

		}break;

		case getItem:
		{
			get_value(wash_mashine1);

		}break;

		case findItem:
		{
			find_value(wash_mashine1);

		}break;

		case viewAllItems:
		{
			all_get(wash_mashine1);

		}break;
		}

	} while (cont != false);


	system("pause");
	return 0;
}