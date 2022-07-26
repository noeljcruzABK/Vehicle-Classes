#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual void Drive()
	{

	}
};

class Boat : Vehicle
{
public:
	void Drive() override 
	{
		cout << "All aboard! We are ready to set sail for the high seas." << endl;
	}
};

class Car : Vehicle
{
public:
	void Drive() override 
	{
		cout << "Buckle up! Time to hit the road." << endl;
	}
};
