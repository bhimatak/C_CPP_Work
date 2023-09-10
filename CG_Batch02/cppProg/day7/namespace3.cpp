#include <iostream>
using namespace std;

namespace first
{
	int value=500;
}

namespace n1{
	int value() { return 10; }
}

namespace n2
{
	double value() { return 20.2; }
}

int value = 400;

int main()
{

	int value=100;
	{
		extern int value;
		cout<<value<<endl;
	}
	cout<<n2::value()<<endl;
	return 0;
}