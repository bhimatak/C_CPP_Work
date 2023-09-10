/*
std::cout
*/

#include <iostream>

namespace First{

	void sayHello()
	{
		std::cout<<"Hello from First Namespace"<<std::endl;
	}
}

namespace Second{
	void sayHello()
	{
		std::cout<<"Hello from Second Namespace"<<std::endl;
	}
}

using namespace Second;
int main()
{
	std::cout<<"Hi"<<std::endl;
	sayHello();

	return 0;
}