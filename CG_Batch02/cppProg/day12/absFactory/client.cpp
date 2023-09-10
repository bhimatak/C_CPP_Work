#ifndef CLIENT_CPP
#define CLIENT_CPP

#include <iostream>
#include <string>

using namespace std;

#endif

#include "carFactory.cpp"

//#define SIMPLE_CAR 1
#define LUXURY_CAR 1

int main()
{
	#ifdef SIMPLE_CAR
		CarFactory *factory = new SimpleCarFactory;
	#elif LUXURY_CAR
		CarFactory *factory = new LuxuryCarFactory;
	#endif

	Car *car = factory->buildWholeCar();

	car->printCarDetails();

	return 0;
}