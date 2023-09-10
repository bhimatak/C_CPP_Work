#include <iostream>
using namespace std;

int main()
{
	int a=10,b=20,c;
	try{
		c = a*b;
		if(c >100)
			throw 1.5;
		else
			cout<<c<<endl;
	}
	catch(char ch)
	{
		cerr<<"Caught char:"<<ch<<endl;
	}
	catch(int x)
	{
		cerr<<"Caught int:"<<x<<endl;
	}
	catch (double d)
	{
		cout<<"Caught d: "<<d<<endl;
	}
	catch(const char * ex)
	{
		cout<<"Caught: "<<ex<<endl;
	}
	catch(...) //default exception
	{
		cout<<"Default Exception"<<endl;
	}

	return 0;
}