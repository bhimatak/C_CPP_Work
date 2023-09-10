/*
Demo on Operator overloading

- operator keyword
operator symbol_name()

some operators which can't be overloaded are,
1) :: 
2) .
3) .*
4) ?:
5) sizeof()


using friend function we can't overload operators like
1) ()
2) []
3) =
4) ->

*/
#include <iostream>
using namespace std;

class Test
{
	public:
		int value;
		Test(){}
		Test(int i) { value = i; }
		void display() { cout<<"\nValue : "<<value<<endl; }
		Test operator +=(Test &obj)
		{
			this->value = this->value + obj.value;
			return *this;
		}

};

int main(int argc, char const *argv[])
{
	/* code */
	Test T1(10), T2(20);

	cout<<"\nT1= ";
	T1.display();
	cout<<"\nT2= ";
	T2.display();
	

	T1 += T2;

	cout<<"\nT1= ";
	T1.display();
	cout<<"\nT2= ";
	T2.display();


	cout<<endl;

	return 0;
}