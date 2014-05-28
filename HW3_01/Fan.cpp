//UML Diagram
//Fan
//private:
//	-speed: int
//	-on: bool
//	-radius: double
//public:
//	+Fan()
//	+ getSpeed(): int
//	+ setSpeed(speed: int): void
//	+ getOn(): bool
//	+ setOn(power: bool): void
//	+ getRadius(): double
//	+ setRadius(radius: double): void



#include "Fan.h"


Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
}

int Fan::getSpeed()
{
	return speed;
}

void Fan::setSpeed(int fanSpeed)
{
	if (fanSpeed >= 1 && fanSpeed <= 3)
		speed = fanSpeed;
}

bool Fan::getOn()
{
	return on;
}

void Fan::setOn(bool power)
{
	on = power;
}

double Fan::getRadius()
{
	return radius;
}

void Fan::setRadius(double fanRadius)
{
	if (fanRadius > 0)
		radius = fanRadius;
}

