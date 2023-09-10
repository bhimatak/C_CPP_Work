/*
Demo on bad_alloc
*/
#include <iostream>
using namespace std;

int main()
{
	try{
		int *ptr = new int[100000000000];

	}
	catch(std::bad_alloc &ex)
	{

		cout<<"Bad allocation caught: "<<ex.what()<<endl;
	}
	return 0;
}