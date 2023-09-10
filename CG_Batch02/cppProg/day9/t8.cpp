//demo on class template with multiple params

/*

template <class T, class U, class V>
class class_name
{
	private:
		T mem1;
		U mem2;
		V mem3;	
};

*/

#include <iostream>
using namespace std;

template <class T, class U, class V=char> //default datatype is set to char for class V type
class Test
{
private:
	T var1;
	U var2;
	V var3;
public:
	Test() {}
	Test(T v1, U v2, V v3) { var1 = v1; var2 = v2; var3=v3; }
	void printValues()
	{
		cout<<"\nVar1 = "<<var1<<endl;
		cout<<"\nVar2 = "<<var2<<endl;
		cout<<"\nVar3 = "<<var3<<endl;
	}
};

int main()
{
	Test<int,float>obj1(10,20.3,'a');
	obj1.printValues();
	
	Test<int,char,bool>obj2(11,'b',false);
	obj2.printValues();

	
	return 0;
}