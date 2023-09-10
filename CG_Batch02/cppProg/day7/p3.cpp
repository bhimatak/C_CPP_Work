/*
Demo on Exception Handling
*/

#include <iostream>
#include <exception>
using namespace std;

class newException: public exception
{
	virtual const char *what() const throw()
	{
		return "Attempted to divide by Zero";
	}
};


int main()
{
	int a=10, b=0, c=0;
	
	try{
		if(b==0)
		{
			newException ne;
			throw ne;
		}
		else
			cout<<"result: "<<a/b<<endl;
	}
	catch(exception &e)
	{
		cout<<e.what()<<endl;
	}


	

	return 0;
}