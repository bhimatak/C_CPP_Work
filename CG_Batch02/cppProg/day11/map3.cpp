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
	map<int, string> M;

	M[1] = "Bhima";
	M[2] = "Shankar";

	
	for(auto &ele: M)
		cout<<"Key: "<<ele.first<<"\tValue: "<<ele.second<<endl;

	//M[1] = "Rubi";
	M.insert(make_pair(1,"Rubi"));
	for(auto &ele: M)
		cout<<"Key: "<<ele.first<<"\tValue: "<<ele.second<<endl;

	return 0;
}