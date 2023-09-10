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

int main()
{
	std::cout<<"Hi"<<std::endl;
	First::sayHello();
	Second::sayHello();
	return 0;
}