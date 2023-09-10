#include <iostream>
using namespace std;

class Test
{
public:
	void disp() { cout<<"Hello Class"<<endl; }
	template <class T> 
	T addition(T v1, T v2) { return (v1+v2); }
};

int main()
{
	Test T1;
	T1.disp();
	cout<<"\nAddition of two Ints= "<<T1.addition(10,20)<<endl;
	cout<<"\nAddition of two doubles= "<<T1.addition(10.1,20.2)<<endl;

	return 0;
}