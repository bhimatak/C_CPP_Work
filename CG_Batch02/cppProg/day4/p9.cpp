/*
Demo on Pointer to the class
*/

#include <iostream>
using namespace std;

class Shape
{
public:
	int h;
	int w;

};

int main()
{
	Shape S1;
	S1.h = 11;
	S1.w = 12;
	Shape *ptr=NULL;
	ptr = &S1;

	cout<<"height : "<<S1.h<<" width : "<<S1.w<<endl;
	cout<<"height : "<<ptr->h<<" width : "<<ptr->w<<endl;
	cout<<endl;

	Shape *p = &S1;
	cout<<"height : "<<p->h<<" width : "<<p->w<<endl;
	
	cout<<"height : "<<p->h<<" width : "<<p->w<<endl;
	int Shape::*ptr1=NULL;
	ptr1 = &Shape::h;
	S1.*ptr1 = 33;
	cout<<"height : "<<S1.h<<endl;

	ptr1 = &Shape::w;
	cout<<"Width : "<<S1.*ptr1<<endl;

	int Shape::*ptr2 = &Shape::w;
	cout<<"ptr2 Width : "<<S1.*ptr2<<endl;


	cout<<"\n";

	return 0;
}