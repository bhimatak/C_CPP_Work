/*
Demo on references
*/

#include <iostream>
using namespace std;



typedef int int_arr[3];

int_arr &func()
{
	static int a[3] = {11,22,33};

	return a;
}

int main()
{
	int val =100;
	int &a = val;
	


	cout<<val<<endl;
	cout<<a<<endl;

	a = 201;

	cout<<val<<endl;
	cout<<a<<endl;

	
	int_arr &ref = func();
	for(int i=0;i<3;i++)
		cout<<ref[i]<<endl;
	

	return 0;
}