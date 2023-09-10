#include <iostream>
using namespace std;

class BC1
{
public:
		void display() { cout<<"\nHello i am BC1"<<endl; }

};

class BC2
{
	public:
		void display() { cout<<"\nHello i am BC2"<<endl; }

};

class DC: public BC1, public BC2
{
	public:
		void dispDC() { cout<<"\nHello i am DC"<<endl; }
};

int main(int argc, char const *argv[])
{
	DC d;

	d.dispDC();
	d.BC1::display();

	/* code */
	return 0;
}