#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> S ={1,2,3,4,5,6,2,4};
	//set<int> S ={5,4,3,2,1};
	//set<string> S={"bhima","shankar","avanish","sanjay","hanif","deepankar"};

	S.insert(11);
	S.insert(5);
	cout<<"Size:"<<S.size()<<endl;
	for(const auto &e: S)
		cout<<e<<" ";
	cout<<endl;
	return 0;
}