//Templates

/*
1. function template
2. class template

1. function 

template <typename T>
T functionName(T param1, T param2, ....)
{
	//code
}

*/

#include <iostream>
#include<ctype.h>
using namespace std;

template <typename B, typename C>
C add(B num1, C num2)
{
	cout<<num1<<" "<<num2<<endl;
	return(num1+num2);
}

int main()
{
	int resi=0;
	double resd=0;
	float a=10.22,b=44.44;

	resi = add<int,double>(10,23.33);
	resd = add<double, double>(22.22,33.33);

	cout<<"resi="<<add<int,double>(10,23.33)<<endl;
	cout<<"resd="<<add<float, float>(a,b)<<endl;
	

	return 0;
}