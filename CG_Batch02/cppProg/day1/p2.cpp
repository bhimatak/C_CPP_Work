/*
Demo on math function
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char const *argv[])
{
	double ret, x=30;

	ret = sin(x);
	std::cout<<ret<<std::endl;

	cout<<"Sqrt(4) = "<<sqrt(4)<<endl;
	cout<<floor(3.7)<<endl;
	cout<<ceil(3.4)<<endl;
	cout<<pow(2,3)<<endl;

	return 0;
}