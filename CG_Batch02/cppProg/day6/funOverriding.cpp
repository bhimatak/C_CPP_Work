/*
function over riding
*/

#include <iostream>
using namespace std;

class BC
{
public:
	void printMsg() { cout<<"Hello I am BC"<<endl; }
};

class DC: public BC
{
public:
	void printMsg() { 
		//BC::printMsg();
	 cout<<"Hello I am DC"<<endl; 
	}
	void disp() { cout<<"Hello World"<<endl; }
};

int main()
{
	BC b;
	b.printMsg();

	cout<<"\nDerived class"<<endl;
	DC d;
	//d.BC::printMsg();
	d.printMsg();

	BC *ptr = &d;

	ptr->printMsg();
	//ptr->disp();

	DC *ptr1 = &d;

	ptr1->printMsg();
	ptr1->disp();
	
	return 0;
}