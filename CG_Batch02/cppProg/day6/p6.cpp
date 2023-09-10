// example to show late/dynamic binding

#include <iostream>
using namespace std;

class BC
{
public:
	virtual void show() { cout<<"\nI am in BC"<<endl; }

};

class DC : public BC
{
	public:
	void show() { cout<<"\nI am in DC"<<endl; }

};


int main()
{
	
	// BC b;
	// b.show();

	 BC *ptr;
	 DC d;

	// d.show();

	 ptr = &d;
	 ptr->show();

	cout<<"\n"<<endl;
	return 0;
}