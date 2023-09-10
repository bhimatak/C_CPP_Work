#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;
void dispArr(list<int>A)
{
	cout<<"\n================================="<<endl;
	cout<<"\nArray Elements are\n";
	for(auto it: A)
		cout<<it<<" ";
	cout<<"\n=================================\n"<<endl;
}

template <class T>
void dispArrs(list<T>A)
{
	cout<<"\n================================="<<endl;
	cout<<"\nArray Elements are\n";
	for(auto it: A)
		cout<<it<<" ";
	cout<<"\n=================================\n"<<endl;
}

int main()
{
	list<int> l1 = {4,5,6,3,2,1};
	list<string> l2={"bcd","zxy","nml"};
	list<float> l3 = {4.4,5.5,6.6,3.5,2.3,1.45};
	cout<<"Size: "<<l1.size()<<endl;

	dispArrs(l1);

	l1.sort();
	
	dispArrs(l1);

	dispArrs(l2);
	l2.sort();
	dispArrs(l2);
	
	dispArrs(l3);
	l3.sort();
	dispArrs(l3);


	return 0;
}