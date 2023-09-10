#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	set<int,less<int>> S;// ={1,2,3,4,5,6,2,4};
	int arr[] = {11,2,30,24,6};
	vector<int>v1={1,6,31,2,5};

	
	S.insert(11);
	S.insert(5);
	S.insert(arr,arr+5);


	cout<<"Size:"<<S.size()<<endl;
	for(const auto &e: S)
		cout<<e<<" ";
	cout<<endl;
	

	S.insert(v1.begin(),v1.end());


	cout<<"Size:"<<S.size()<<endl;
	for(const auto &e: S)
		cout<<e<<" ";
	cout<<endl;

	auto b = S.find(11);
	S.erase(b,S.end());
	for(const auto &e: S)
		cout<<e<<" ";
	cout<<endl;

	set<int>::iterator it;

	for(it = S.begin();it!= S.end();it++)
		cout<<*it<<" ";

	cout<<endl;
	
	return 0;
}