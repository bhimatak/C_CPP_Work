/*
Demo on friend class
*/

#include <iostream>

using namespace std;

class Test;

class Other
{
private:
	int x;
	friend class Test;
	void func1() { cout<<"\nI am from Other class"<<endl;}
public:
	Other() : x(12) {}

};



class Test
{
private:
	int a;
	friend class Other;
public:
	Test() : a(13) {}
	void setData(int i) { a = i; }
	void print() { cout <<"a = "<<a<<endl;}
	
	friend void Other::func1();
	void add()
	{
		Other obj;
		cout<<a<<endl;
		cout<<obj.x<<endl;
		obj.func1();
	}
};

int main()
{
	Test T1;
	T1.setData(10);
	T1.print();
	
	T1.add();
	

	//Other O1;
	//O1.func1();

	//cout<<T1.x<<endl;

	return 0;
}