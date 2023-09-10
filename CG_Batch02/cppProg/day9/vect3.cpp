#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int sumOdd=0, sumEven=0;

	for(int i=0;i<=100;i++)
		v.push_back(i);
	
	for(auto i: v)
		cout<<" "<<i;
	cout<<endl;

	for(int i=0;i<v.size();i++)
	{
		if(v.at(i)%2 == 0)
			sumEven += v.at(i);
		else
			sumOdd += v.at(i);
	}

	cout<<"\nSum of Even: "<<sumEven<<"\nSum of Odd: "<<sumOdd<<endl;
	//cout<<v.begin()<<endl;
	// v.erase();
	// cout<<v.size()<<" "<<v.capacity()<<endl;
	// int i=100;
	// while(!v.empty())
	// {
	// 	cout<<" Poped out element: "<<v.at(i)<<endl;
	// 	v.pop_back();
	// 	i--;
	// }

	v.erase(v.end()-19, v.end());
	for(auto i: v)
		cout<<" "<<i;
	cout<<endl;
	cout<<"\n\n";
	//v.insert(v.begin(),2,200);
	int a[] = {400,500,600,700};
	v.insert(v.begin()+10,&a[0],&a[4]);
	for(auto i: v)
		cout<<" "<<i;
	cout<<endl;
	return 0;


}