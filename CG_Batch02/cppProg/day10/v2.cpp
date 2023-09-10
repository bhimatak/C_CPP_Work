#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> a={1,23,54,15,6};
	for(int it=0;it<a.size();it++)
		cout<<a.at(it)<<endl;

	// //sort()=> algorithm header, 3 params
	// //sort the  element in desecending order
	// sort(a.begin(),a.end(),greater<int>());
	// cout<<"\nafter sorting"<<endl;
	// for(auto it : a)
	// 	cout<<it<<endl;


	sort(a.begin(),a.end());
	cout<<"\nafter sorting"<<endl;
	for(auto it : a)
		cout<<it<<endl;

	return 0;
}