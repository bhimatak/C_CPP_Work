/*
map: stl

map<T1, T2> obj;

T1=> key type -> unique
T2=> value type

map - self balanced tree
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<int>,greater<>> M;

	M["rohit"].push_back(999801888);
	M["bhima"].push_back(999801887);

	// map<int, string> M;
	// M[1]="bhima";
	// M[2]="shankar";
	// M[3]="rohit";


	// for(auto &ele: M)
	// 	cout<<"Key: "<<ele.first<<"\tValue: "<<ele.second<<endl;

	 //cout<<"M[rohit]"<<M["rohit"]<<endl;


	 for(auto &ele1: M){
	 	
	 	for(auto &ele2 : ele1.second) //ele1.second => vector
	 	{
	 		cout<<"Key: "<<ele1.first;
	 		cout<<" Value: "<<ele2<<endl;
	 	}
	 }

	 M["rohit"].push_back(999801889);
	 M["rohit"].push_back(999801890);
	 M["rohit"].push_back(999801890);
	 cout<<"After adding\n";
	 for(auto &ele1: M){
	 	
	 	for(auto &ele2 : ele1.second) //ele1.second => vector
	 	{
	 		cout<<"Key: "<<ele1.first;
	 		cout<<" Value: "<<ele2<<endl;
	 	}
	 }
	return 0;
}