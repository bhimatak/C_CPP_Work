/*
Demo on function overloading
*/

#include <iostream>

using namespace std;
class funcOverload{
	public:
	int add(int, int);
	int add(int, int, int);
	double add(double, double);
	double add(double, double, double);
	double add(int, double);
};




int funcOverload::add(int a, int b)
{
	return (a+b);
}

int funcOverload::add(int a, int b, int c){
	return (a+b+c);
}

double funcOverload::add(double x, double y){ return (x+y); }
double funcOverload::add (double x, double y, double z) { return (x+y+z); }
double funcOverload::add (int a, double x) { return ((double)a+x); }


int main()
{
	funcOverload f;
	cout<<"\n"<<f.add(3,5)<<endl;
	cout<<"\n"<<f.add(3,5,6)<<endl;
	cout<<"\n"<<f.add(3.3,5.5)<<endl;
	cout<<"\n"<<f.add(3.3,5.5,6.6)<<endl;
	cout<<"\n"<<f.add(3,5.5)<<endl;

	return 0;
}