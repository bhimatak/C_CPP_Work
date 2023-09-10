#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sizeComp(const vector<int>&vect1, const vector<int>&vect2)
{
	return (vect1.size() > vect2.size());
}

int main()
{
	vector < vector<int> > v1{{1,2}, {3,4,5},{6},{7,5,3,6,8}};

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

	sort(v1.begin(), v1.end(),sizeComp);
	cout<<"\nAfter Sorting\n";
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
			cout<<v1[i][j]<<" ";
		cout<<endl;
	}
	return 0;

}