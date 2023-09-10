#include <iostream>
#include <stdio.h>
#include<map>

using namespace std;

int main()
{
	multimap<string, int>M;

	M.insert(make_pair("Amit",101));
	M.insert(make_pair("Amit",102));
	M.insert(make_pair("Amit",103));
	M.insert(make_pair("Amit",104));
	M.insert(make_pair("Bhima",101));
	M.insert(make_pair("Bhima",103));
	M.insert(make_pair("Rohit",101));
	M.insert(make_pair("Avanish",104));
cout<<"\n=============================\n";
	for(auto &ele: M)
		cout<<"First: "<<ele.first<<"\tSecond: "<<ele.second<<endl;

	auto range = M.equal_range("Rohit1");
cout<<"\n=============================\n";
	for(auto it = range.first; it != range.second; it++)
		cout<<it->first<<"\t"<<it->second<<endl;
cout<<"\n=============================\n";
	for(auto &ele: M)
		cout<<"First: "<<ele.first<<"\tSecond: "<<ele.second<<endl;


cout<<"\n=============================\n";

	cout<<M.count("Amit")<<endl;

	auto pair = M.find("amit");
	if(pair != M.end())
		cout<<pair->first<<"\t"<<pair->second<<endl;
	else
		cout<<"No Value found"<<endl;
	cout<<"\n=============================\n";
	for(auto &ele: M)
		cout<<"First: "<<ele.first<<"\tSecond: "<<ele.second<<endl;

	
	return 0;
}