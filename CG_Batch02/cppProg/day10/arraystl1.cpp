//demo on array stl

#include <iostream>
#include <array>
#include <cstring>

using namespace std;

void dispArr(array<int, 3>A)
{
	cout<<"\n================================="<<endl;
	cout<<"\nArray Elements are\n";
	for(auto it: A)
		cout<<it<<" ";
	cout<<"\n=================================\n"<<endl;
}
int main()
{
	array<int, 3>a={10,20,30};
	array<int, 3>b={40,50,60};
	dispArr(a);
	dispArr(b);

	a.swap(b);
	
	dispArr(a);
	dispArr(b);
	
	return 0;
}