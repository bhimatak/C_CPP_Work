//template for multiple argument types
#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
void echoAndReverse(T1 a1, T2 a2, T3 a3)
{
	cout<<"Original order is: ";
	cout<<a1<<"\t"<<a2<<"\t"<<a3<<endl;
	cout<<"Reverse order is: ";
	cout<<a3<<"\t"<<a2<<"\t"<<a1<<endl;
}

int main()
{
	echoAndReverse("Computer", 'A', 13);
	echoAndReverse("One", 13.3,"Bhima");

	return 0;
}