/*
Demo on RTTI
*/

#include <iostream>
using namespace std;

class BC
{
protected:
	int a;
	virtual void func() { cout<<"BC"<<endl; }
};

class DC: public BC
{
protected:
	int b;

};

int main(int argc, char const *argv[])
{
	BC *b = new DC; //2000
	DC *d = dynamic_cast <DC *>(b);//new DC; //3000

	if(d != NULL)
		cout<<"Works d: "<<d<<" b: "<<b<<endl;
	else
		cout<<"Can't cast BC* to DC*"<<endl;	

	return 0;
}