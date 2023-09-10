#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myvector;

	int sumOdd=0,sumEven=0;

	for(int i=0;i<=100;i++)
	{
		myvector.push_back(i);
	}
	for(auto i: myvector)
		cout<<" "<<i;
	cout<<endl;
	for(int i =0 ;i<myvector.size();i++)
	{
		if(myvector.at(i)%2 == 0)
			sumEven += myvector.at(i);
		else
			sumOdd += myvector.at(i); 
	}
	cout<<"\nSum of Even: "<<sumEven<<"\n sumOdd of odd:"<<sumOdd<<endl;
	/*int i=100;
	while(!myvector.empty())
	{
		cout<<"Poped out element: "<<myvector.at(i)<<endl;
		myvector.pop_back();
		i--;
	}*/
	/*myvector.erase(myvector.begin()+5,myvector.begin()+95);
	for(auto i:myvector)
		cout<<" "<<i;
	cout<<endl;*/
/*	myvector.erase(myvector.end()-96,myvector.end()-6);
	for(auto i:myvector)
		cout<<" "<<i;*/
/*	myvector.insert(myvector.begin()+2,2,200);
	for(auto i:myvector)
		cout<<" "<<i;*/
	int a[] = {200,300,400,500,600};
	myvector.insert(myvector.begin(),&a[0],&a[5]);
	for(auto i:myvector)
		cout<<" "<<i;
	cout<<endl;
	return 0;
}