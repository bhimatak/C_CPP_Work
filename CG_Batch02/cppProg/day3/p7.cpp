#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	// int *a;
	// //a = (int *)malloc(3*sizeof(int)); // c style of acclocating memory
	// a = new int[3]; // c++ style of acclocating memory
	// a[0] = 1001;
	// a[1] = 1002;
	// a[2] = 1003;

	// cout<<"\n"<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl;

	// //free(a); // c style to free up memory
	// delete(a); // c++ style to free up memory


	char *str=NULL;
	size_t len;
	cout<<"\nEnter the len of string: ";
	cin>>len;
	scanf("\n");
	str = new char[len];
	getline(&str,&len,stdin);
	cout<<str<<endl;
	return 0;
 
}