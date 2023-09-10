#include <iostream>
using namespace std;

class Test
{
	static int count;
public:
	Test() { count++; cout<<"Count: "<<count<<endl; }
};



int Test::count=0;

void func1()
{
	Test T2;
}

int main()
{
	Test T1;
	func1();

	return 0;
}