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

void friendFunc()
{
	Shape R1;
	//R1.setData(11,12);
	//R1.dispData();
	R1.height = 11;
	R1.width = 12;
	cout<<R1.height<<" "<<R1.width<<endl;
	R1.dispData();
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