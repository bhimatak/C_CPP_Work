// class to create dynamic arrays
//arr size shoulbe be increased from period to period
/*
arr[5]={1,2,3,4,5}; 2000
a[5] = 10;//=> new space with doubling up the arr size
new [10]
a[10]=>3000={1,2,3,4,5,10,11,12,13,14}
new [20]
a[20]={1,2,3,4,5,10,11,12,13,14,15}=>4000
a[10]=15;
*/

#include <iostream>
#include "dArrayMacro.h"

using namespace std;



int main()
{

	int arri[5] = {10,20,30,40,50};
	float arrf[] = {2.2,3.3,4.4,5.5,6.6};

	Array <int> a(arri,5);
	a.dispArr();

	Array<float> b(arrf, (sizeof(arrf)/sizeof(arrf[0])));
	b.dispArr();

	return 0;
}