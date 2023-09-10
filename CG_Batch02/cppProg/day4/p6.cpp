/*
Demo on friend function
program to find max of two classes
*/
#include <iostream>
using namespace std;

class XYZ; // forward decalrtion /empty class

class ABC
{
	int a;
public:
	ABC(int i) { a = i;}
	friend void max(ABC, XYZ);
};

class XYZ
{
	int a;
	public:
		XYZ(int i) { a = i;}
		friend void max(ABC, XYZ);
};





void max(ABC t1, XYZ t2)
{
	if(t1.a > t2.a)
		cout<<"ABC is bigger"<<endl;
	else
		cout<<"XYZ is bigger"<<endl;
}

int main()
{
	ABC a1(10);
	XYZ x1(20);
	max(a1,x1);

	return 0;
}