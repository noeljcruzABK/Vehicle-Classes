// Create a vehicle base class, and from that create the necessary classes to get to boat, car and airplane.
// All classes should have an overridable function named Drive.
// Create an object of each and demonstrate the Drive function works.
// Feel free to add any additional functionality to better simulate these vehicles!

#include <iostream>
#include "Car.cpp"
using namespace std;

int main()
{
    Car myCar(2019, 20, "BMW");
    myCar.Drive(10);
    myCar.Display();
}
