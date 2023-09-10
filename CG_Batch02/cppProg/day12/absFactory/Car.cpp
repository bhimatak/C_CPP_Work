#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;
#endif

class Tire{
protected:
	string name;
	int pressure;
public:
	//Tire(string n, int p) { name = n; pressure = p; }
	Tire(string n, int p) : name(n),pressure(p) {}
	string getName() { return name; }
	int getPressure() { return pressure; }
};


class SimpleTire: public Tire
{
public:
	SimpleTire(): Tire("SimpleTire", 75) {}
};

class LuxuryTire: public Tire
{
public:
	LuxuryTire(): Tire("LuxuryTire", 100) {}
};

class Body{
protected:
	string name;
	int strength;
public:
	Body(string n, int s) : name(n), strength(s) {}
	string getName() { return name; }
	int getStrength() { return strength; }
};


class SimpleBody: public Body
{
public:
	SimpleBody(): Body("SimpleBody", 75) {}
};

class LuxuryBody: public Body
{
public:
	LuxuryBody(): Body("LuxuryBody", 100) {}
};


class Car{

protected:
	string name;
	Tire *tire;
	Body *body;
public:
	Car(string n) : name(n){}
	void setTire(Tire *t) { tire = t; }
	void setBody(Body *b) { body = b; }
	void printCarDetails()
	{
		cout<<"\n==============================================\n";
		cout<<"\nCar: "<<name<<endl;
		cout<<"\nTire: "<<tire->getName()<<"\tPressure: "<<tire->getPressure()<<endl;
		cout<<"\nBody: "<<body->getName()<<"\tStrength: "<<body->getStrength()<<endl;
		cout<<"\n==============================================\n";
	}

};