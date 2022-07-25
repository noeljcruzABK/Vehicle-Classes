#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

class Car
{
public:
	// Member variables
	int m_year;
	int m_miles;
	string m_brand;

	// Member functions
	void Display()
	{
		cout << "Brand: " << m_brand << endl;
		cout << "Year: " << m_year << endl;
		cout << "Miles: " << m_miles << endl;
	}

	void Drive(int miles)
	{
		m_miles = m_miles + miles;
	}
};