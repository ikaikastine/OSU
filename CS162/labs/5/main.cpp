#include <iostream>
#include "vehicle.h"
#include "bike.h"
#include "skateboard.h"
#include "car.h"
#include "motorcycle.h"
#include "Date.h"

using namespace std;

int main() {
	vehicle v(4);
	bike b(1);
	skateboard s(1);
	car c(5);
	motorcycle m(1);

	int userDay;

	cout << "Please enter the day: ";
	cin >> userDay;

	Date d;
	d.set_day(userDay);
	int x = d.get_day_of_week();

	cout << "Day of the week is: " << x << endl;

	//vehicle v_array[2]={bike(1), car(4)};
	//vehicle *v_array[2]={new bike(1), new car(4)};

	cout << "Vehicle toll = " << v.getToll() << endl;
	cout << "Car Toll = " << c.getToll(x) << endl;
	cout << "Motorcycle toll = " << m.getToll(x) << endl;
	cout << "Bike toll = " << b.getToll() << endl;
	cout << "Skateboard toll = " << s.getToll() << endl;

	//cout << v.getSeats() << endl;
	//cout << b.getSeats() << endl;


	//cout << vptr->getSeats() << endl;
	//cout << vptr->getToll() << endl;

	return 0;
}