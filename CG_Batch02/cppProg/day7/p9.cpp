/*
Demo on Pure Virtual function
method in BC assigned with = 0 is Pure virtual fucntion
and all derived class should implement the method 
*/
#include <iostream>
using namespace std;

class Shape // Abstract Class => BC is atleast having one pure virtual func
{
protected:
	float d;
public:
	// creating a pure virtual function
	 virtual void calcArea() = 0;

	void getDimension() { cin>>d; }
};

class Square: public Shape
{
public:
	Square(){ cout<<"\nSquare is called"<<endl; }
	~Square(){ cout<<"\nSquare is destructed"<<endl; }
	void calcArea() { cout<<"Area of Square: "<<d*d<<endl; }
	virtual void sq()=0;

};

class x: public Square
{

public:
	void sq() { cout<<"\nparent=>Square=>Shape"<<endl; }
};

class Triangle: public Shape
{
	int height;
public:
	void getHeight() { cout<<"Enter height: "; cin>>height; }
	void calcArea() { cout<<"Area of Triangle: "<<0.5*d*height<<endl; }
};

int main()
{
	x S;
	cout<<"\nEnter side: ";
	S.getDimension();
	S.calcArea();
	S.sq();
	Triangle T;
	cout<<"\nEnter Base: ";
	T.getDimension();
	T.getHeight();
	T.calcArea();

	return 0;
}