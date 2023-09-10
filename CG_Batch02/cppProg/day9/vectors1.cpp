/*

what are vectors?
how are they dynamic?
functions: push_back, pop_back(), back(), front(),...
size(), capacity()...

vectors are seq. containers represnting arrays that can change in size
keyword: vector<dt>
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//creating vector with the capacity
	vector<int>arr(30,20); //=>vector(arg1,arg2) arg1=>size of vector arg1=>first value in vector 
	// initializer list
	vector<int>arr1 = {1,2,3,4,5};
	//uniform initialzation
	vector<int>arr2 {2,3,4,5,6};
	vector<string>v1={"bhima","Shankar", "Ravi"};

	cout<<arr1[4]<<endl;
	cout<<arr1.size()<<endl;
	cout<<arr1.capacity()<<endl;

	cout<<"\n\n\n";
	//range based looping
	for(auto i : v1)
		cout<<i<<endl;

	return 0;
}
