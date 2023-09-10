#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	vector < vector<int> > v1{{3,5,1}, {4,8,6},{7,2,9}};

	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
			cout<<v1[i][j]<<" ";
		cout<<endl;
	}

	// sort(v1.begin(), v1.end());
	// cout<<"\nAfter Sorting\n";
	// for(int i=0;i<v1.size();i++)
	// {
	// 	for(int j=0;j<v1[i].size();j++)
	// 		cout<<v1[i][j]<<" ";
	// 	cout<<endl;
	// }

	for(int i=0;i<v1.size();i++)
	{
		sort(v1[i].rbegin(), v1[i].rend(), greater<int>());
		
	}

	//sort(v1[0].rbegin(), v1[0].rend());
	cout<<"\nAfter Sorting\n";
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
			cout<<v1[i][j]<<" ";
		cout<<endl;
	}
	return 0;

}