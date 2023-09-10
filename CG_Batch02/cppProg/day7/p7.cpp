#include <iostream>
using namespace std;

class Test
{
public:
	Test(){ cout<<"Test is constructed!"<<endl; }
	~Test(){ cout<<"Test is destructed!"<<endl; }
};

int main()
{
	try 
	{
		throw 10;
		
		
	}
	catch(int x)
	{
		cout<<"Caught: "<<x<<endl;
		Test t1;
	}

	return 0;
}