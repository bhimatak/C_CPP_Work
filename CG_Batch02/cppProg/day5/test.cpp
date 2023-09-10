#include <iostream>
using namespace std;

class BaseClass
{
	public:
		int x=10;
	protected:
		int a=1;

};

class DerivedClass : private BaseClass
{
	private:
		// int a=1;
		int b;
	// protected:
	// 	int a=1;
	// private:
	// 	int x = 10;
	public:
		void setB(int x) { b = x; }
		void getData() { cout<<"b = "<<b<<" a = "<<a<<" x="<<x<<endl;}
};



int main()
{
	DerivedClass D;
	D.setB(10);
	D.getData();
	cout<<"D.x = "<<D.x<<endl;
	cout<<endl;
	return 0;
}