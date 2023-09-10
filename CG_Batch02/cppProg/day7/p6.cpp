#include <iostream>
using namespace std;

int main()
{
	try{
		//throw 20;
		try{
			throw 10;
		}

		catch(int x)
		{
			cout<<"Caught within nesting: "<<x<<endl;
			throw;
		}
	}
	catch(...)
	{
		cout<<"Caught: "<<endl;
	}

	return 0;
}


