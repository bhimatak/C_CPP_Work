/*
Exception handling with what()
*/

#include <iostream>
#include <exception>
using namespace std;

class newException: public exception
{
	virtual const char *what() const throw()
	{
		return "New exception Occured!";
	}
} newex;

int main()
{

	try{
		throw newex;
	}
	catch(exception &ex)
	{
		cerr<<ex.what()<<endl;
	}

	return 0;
}

