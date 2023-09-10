/* 
demo pointer to a pointer
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int value = 100;
	int *ptr=NULL;
	int **pptr=NULL;

	ptr = &value;
	cout<<"add of &value = "<<&value<<endl;
	cout<<"ptr/value = "<<*ptr<<endl;

	pptr = &ptr;
	cout<<"add of &ptr = "<<&ptr<<endl;
	
	cout<<"pptr/value = "<<**pptr<<endl;

	/* code */
	return 0;
}