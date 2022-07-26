// Create a vehicle base class, and from that create the necessary classes to get to boat, car and airplane.
// All classes should have an overridable function named Drive.
// Create an object of each and demonstrate the Drive function works.
// Feel free to add any additional functionality to better simulate these vehicles!

#include <iostream>
#include "Vehicle.cpp"
using namespace std;

bool promptSelection();
void driveVehicle();

int main()
{
	bool validSelection = false;

	cout << "- Welcome to the Level Up Travel Agency -" << endl;
	cout << "Please select your mode of trasportation: 1) Boat, 2) Car, or 3) Airplane:" << endl;

	while (!validSelection) {
		validSelection = promptSelection();
	}

	cout << "Have a safe trip!" << endl;
}

bool promptSelection() {
	int selection;

	while (!(cin >> selection) || selection > 3 || selection < 1)
	{
		cout << "Please make your selection by typing the number 1, 2, or 3, and pressing Enter:" << endl;
		cin.clear();
		cin.ignore(123, '\n');
	}

	switch (selection) {
	case 1:
		cout << "You've selected to travel by Boat!" << endl;
		driveVehicle();
		return true;
	case 2:
		cout << "You've selected to travel by Car!" << endl;
		driveVehicle();
		return true;
	case 3:
		cout << "You've selected to travel by Airplane!" << endl;
		driveVehicle();
		return true;
	default:
		return false;
	}
}

void driveVehicle() {
	cout << "Are you all packed up and ready to go? (y/n):" << endl;
	bool ready = false;
	string response;
	while (!ready)
	{
		cin >> response;
		if (response == "y" || response == "Y") {
			ready = true;
		}
		else cout << "Don't worry, take your time." << endl;
		cin.clear();
	}
}
