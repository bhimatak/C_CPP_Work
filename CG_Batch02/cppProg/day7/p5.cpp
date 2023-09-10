#include <iostream>
using namespace std;

void func1(int *ptr, int a) throw(int *, int) //dynamic exception specification
{
	if(a == 0)
		//cout<<"a is zero"<<endl;
		throw a;
	if(ptr == NULL)
		//cout<<"NULL value"<<endl;
		throw ptr;

	for(int i=0;i<10;i++)
		ptr[i] = (i*2);
	
	for(int i=0;i<10;i++)
		cout<<ptr[i]<<endl;
	
	

}

int main()
{
	int *ptr=NULL;// = new int[10];
	try{
		func1(ptr,10);
	}
	catch(int c)
	{
		cout<<"Caught: "<<c<<endl;
	}
	catch(...)
	{
		cout<<"Caught error from function"<<endl;
	}
	return 0;
}