/*
map: stl

map<T1, T2> obj;

T1=> key type -> unique
T2=> value type

map - self balanced tree
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int,less<>> M;

	M["rohit"] = 444444;
	M["bhima"] = 333333;

	M.insert(make_pair("shankar",555555));

	for(auto &ele: M)
		cout<<"Key: "<<ele.first<<"\tValue: "<<ele.second<<endl;

	//cout<<M["rohit"]<<endl;

	return 0;
}