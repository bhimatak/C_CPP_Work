#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myvector;
	cout<<"Size \t Capacity"<<endl;
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	myvector.push_back(5);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(4);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(3);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(2);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(1);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(0);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(6);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(7);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;

	myvector.push_back(8);
	cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;


	for(int i=0;i<myvector.size();i++)
		cout<<myvector[i]<<" ";
	cout<<endl;

try{
	for(int i=0;i<myvector.size();i++)
		cout<<myvector.at(i)<<" ";
	}
	catch(exception &e)
	{
		cout<<"\n"<<e.what()<<endl;
	}
	cout<<endl;

	for(auto i : myvector)
		cout<<i<<" ";
	cout<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// myvector.pop_back();
	// cout<<myvector.size()<<"\t"<<myvector.capacity()<<endl;
	// //myvector.clear();
	// if(!myvector.empty()){
	// 	for(auto i : myvector)
	// 		cout<<i<<" ";
	// }

	cout<<myvector.front()<<endl;
	cout<<myvector.back()<<endl;
	myvector.pop_back();
	cout<<myvector.front()<<endl;
	cout<<myvector.back()<<endl;
	cout<<endl;

	return 0;
}