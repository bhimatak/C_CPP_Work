#include<iostream>
#include<thread>
using namespace std;

typedef unsigned long long ull;

int amt=0;

void addMoney(int x)
{
	ull start =0, end=1900000000;
	cout<<"amt add="<<amt<<endl;
	amt+=x;
	for(ull i=start; i<=end;++i)
		{
			
		}

}

void subMoney(int x)
{
	cout<<"amt sub="<<amt<<endl;
	amt-=x;

}

int main()
{
	std::thread t1(addMoney,150);
	std::thread t2(subMoney,100);

	t2.join();
	cout<<"Amount: "<<amt<<endl;
	t1.join();
	cout<<"Amount: "<<amt<<endl;

	return 0;
}