/*
Demo on friend function
*/

#include <iostream>
using namespace std;

class Shape
{
	private:
		int height;
		int width;
	public:
		friend void friendFunc();
		void setData(int x, int y) { height = x; width = y; }
		void dispData() { cout <<"height: "<<height<<" width: "<<width<<endl;}
};


class Test
{
	int a;
	int b;
	public:
		friend void friendFunc();
		void dispTest() { cout<<"\n a="<<a<<" b="<<b<<endl;}

};


void friendFunc()
{

	Shape R1;
	Test T1;

	int res1, res2;

	R1.height = 11;
	R1.width = 21;
	T1.a = 12;
	T1.b = 22;
	
	res1 = R1.height + T1.a;
	res2 = R1.width + T1.b;

	cout<<res1<<" "<<res2<<endl;

	
}

int main()
{
	Shape Rect;
	Rect.setData(10,20);
	Rect.dispData();
	friendFunc();
	cout<<endl;
	return 0;
}