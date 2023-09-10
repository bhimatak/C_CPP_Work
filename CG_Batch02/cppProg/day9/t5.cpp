//template overloading
#include <iostream>
using namespace std;

template <class T>
T sum(T v1, T v2)
{
	return (v1+v2);
}

template <class T>
T sum(T v1, T v2, T v3)
{
	return (v1+v2+v3);
}


int main()
{
	int a=10,b=20,c=30,resi=0;
	double v1=12.2,v2=33.33,v3=45.66, resd=0;

	resi = sum<int>(a,b);
	cout<<"\nResult of two numbers: "<<resi<<endl;

	resi = sum<int>(a,b,c);
	cout<<"\nResult of three numbers: "<<resi<<endl;

	resd = sum(v1,v2);
	cout<<"\nResult of two numbers double: "<<resd<<endl;

	resd = sum(v1,v2,v3);
	cout<<"\nResult of three numbers double: "<<resd<<endl;

	return 0;
}