#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v1 = {1,2,3};

	//declaration of iterator
	vector<int>::iterator it;

	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	cout<<endl;

	v1.push_back(4);
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	cout<<endl;

	for(it = v1.begin();it!=v1.end();it++)
		cout<<*it<<" ";
	cout<<endl;


	for(it = v1.begin();it!=v1.end();it++)
		{
			if(it == (v1.begin()+2))
				it = v1.insert(it,5);
		}

	for(it = v1.begin();it!=v1.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	cout<<endl;


	return 0;
}