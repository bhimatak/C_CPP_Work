/*
Demo on function overloading
*/

#include <iostream>

using namespace std;

int add(int, int);
int add(int, int, int);
double add(double, double);
double add(double, double, double);
double add(int, double);


int main()
{
	cout<<"\n"<<add(3,5)<<endl;
	cout<<"\n"<<add(3,5,6)<<endl;
	cout<<"\n"<<add(3.3,5.5)<<endl;
	cout<<"\n"<<add(3.3,5.5,6.6)<<endl;
	cout<<"\n"<<add(3,5.5)<<endl;

	return 0;
}

int add(int a, int b)
{
	return (a+b);
}

int add(int a, int b, int c){
	return (a+b+c);
}

double add(double x, double y){ return (x+y); }
double add (double x, double y, double z) { return (x+y+z); }
double add (int a, double x) { return ((double)a+x); }