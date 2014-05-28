#include <iostream>
#include "Fan.h"
using namespace std;


int main()
{
	Fan f1;
	f1.setSpeed(3);
	f1.setRadius(10);
	f1.setOn(true);

	Fan f2;
	f2.setSpeed(2);
	f2.setRadius(5);
	f2.setOn(false);

	cout << "Fan 1 speed= " << f1.getSpeed() << "\nradius= " << f1.getRadius() << "\non= " << f1.getOn() << endl << endl;
	cout << "Fan 2 speed= " << f2.getSpeed() << "\nradius= " << f2.getRadius() << "\non= " << f2.getOn() << endl << endl;

}