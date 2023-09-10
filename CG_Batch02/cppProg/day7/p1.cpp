/*
Demo on Exception Handling
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int t;
	t = a;
	a=b;
	b=t;
}
int main()
{
	int a=10, b=0, c=0;
	
	try{
		if(b==0)
		{
			throw "Divide by Zero Error Occured!";
		}
		c = a/b;
	}
	catch(const char *estr)
	{
		cout<<estr<<endl;
	}


	cout<<c<<endl;

	return 0;
}