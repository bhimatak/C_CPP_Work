/*
multimap can have multiple elements with same key
- it keeps all the keys in sorted order.
*/
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
	multimap<int,int> mm1;
	mm1.insert(pair<int,int>(1,40));
	mm1.insert(pair<int,int>(22,41));
	mm1.insert(pair<int,int>(33,42));
	mm1.insert(pair<int,int>(4,43));
	//cout<<"Size: "<<mm1.size()<<endl;
	mm1.insert(pair<int,int>(4,44));
	//cout<<"Size: "<<mm1.size()<<endl;

	multimap<int,int>:: iterator it;

	for(it = mm1.begin(); it!= mm1.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<"\n=============================\n";
	mm1.insert(pair<int,int>(15,83));
	mm1.insert(pair<int,int>(6,24));
	mm1.insert(pair<int,int>(18,54));
	
	mm1.erase(mm1.begin(),mm1.find(6));
	for(it = mm1.begin(); it!= mm1.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}


	
	return 0;
}