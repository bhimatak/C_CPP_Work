#include <iostream>
using namespace std;

template <class T>
T square(T number)
{
	return (number*number);
}

int main()
{

	cout<<square<int>(3)<<endl;
	cout<<square<double>(5.5)<<endl;

	return 0;
}